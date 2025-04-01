#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks[3];
    int total;
    float average;
};

void computeResults(struct Student students[], int n) {
    for (int i = 0; i < n; i++) {
        students[i].total = 0;
        for (int j = 0; j < 3; j++)
            students[i].total += students[i].marks[j];

        students[i].average = students[i].total / 3.0;
    }
}

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll);
        printf("Enter marks in 3 subjects: ");
        for (int j = 0; j < 3; j++)
            scanf("%d", &students[i].marks[j]);
    }

    computeResults(students, n);

    printf("\nStudent Results:\n");
    for (int i = 0; i < n; i++) {
        printf("Name: %s, Roll No: %d, Total Marks: %d, Average: %.2f\n",
               students[i].name, students[i].roll, students[i].total, students[i].average);
    }

    return 0;
}