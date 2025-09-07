#include <stdio.h>

#define STUDENTS 20
#define SUBJECTS 5

int main() {
    float MARKS[STUDENTS][SUBJECTS];
    float subject_avg[SUBJECTS] = {0};
    float student_avg[STUDENTS] = {0};
    int i, j;
    int below_50_count = 0;

    // Input marks for each student
    printf("Enter the marks for %d students in %d subjects:\n", STUDENTS, SUBJECTS);
    for (i = 0; i < STUDENTS; i++) {
        printf("Student %d:\n", i + 1);
        for (j = 0; j < SUBJECTS; j++) {
            printf("  Subject %d: ", j + 1);
            scanf("%f", &MARKS[i][j]);
        }
    }

    // (a) Average marks in each subject
    for (j = 0; j < SUBJECTS; j++) {
        float sum = 0;
        for (i = 0; i < STUDENTS; i++) {
            sum += MARKS[i][j];
        }
        subject_avg[j] = sum / STUDENTS;
    }

    // (b) Average marks of each student
    for (i = 0; i < STUDENTS; i++) {
        float sum = 0;
        for (j = 0; j < SUBJECTS; j++) {
            sum += MARKS[i][j];
        }
        student_avg[i] = sum / SUBJECTS;
        // (c) Count students with average < 50
        if (student_avg[i] < 50) {
            below_50_count++;
        }
    }

    // (d) Display scores of each student
    printf("\nScores of each student:\n");
    for (i = 0; i < STUDENTS; i++) {
        printf("Student %d: ", i + 1);
        for (j = 0; j < SUBJECTS; j++) {
            printf("%.2f ", MARKS[i][j]);
        }
        printf("\n");
    }

    // Display average marks in each subject
    printf("\nAverage marks in each subject:\n");
    for (j = 0; j < SUBJECTS; j++) {
        printf("Subject %d: %.2f\n", j + 1, subject_avg[j]);
    }

    // Display average marks of each student
    printf("\nAverage marks of each student:\n");
    for (i = 0; i < STUDENTS; i++) {
        printf("Student %d: %.2f\n", i + 1, student_avg[i]);
    }

    // Display number of students scoring below 50
    printf("\nNumber of students who scored below 50 in average: %d\n", below_50_count);

    return 0;
}
