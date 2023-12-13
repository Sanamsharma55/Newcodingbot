#include <stdio.h>

// Define the structure
struct Student {
    char name[50];
    int marks[5];  // Array to store marks of 5 subjects
};

int main() {
    struct Student student;
    int i, total = 0;

    // Input student information
    printf("Enter student name: ");
    scanf("%s", student.name);

    printf("Enter marks for 5 subjects: ");
    for(i = 0; i < 5; i++) {
        scanf("%d", &student.marks[i]);
    }

    // Calculate total marks
    for(i = 0; i < 5; i++) {
        total += student.marks[i];
    }

    // Print student information
    printf("Student Name: %s\n", student.name);
    printf("Total Marks: %d\n", total);

    return 0;
}
