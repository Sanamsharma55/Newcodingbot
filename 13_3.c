#include <stdio.h>

// Define the structure
typedef struct {
    char name[50];
    int marks;
} Student;

// Function to calculate average marks
void calculateAverage(Student students[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("Average marks of %s: %d\n", students[i].name, students[i].marks/5);
    }
}

int main() {
    int i, j;

    // Define the array of structures
    Student students[3] = {
        {"Alice", 0},
        {"Bob", 0},
        {"Charlie", 0}
    };

    // Enter marks for each student
    for(i = 0; i < 3; i++) {
        printf("Enter marks for 5 subjects for student %s: ", students[i].name);
        for(j = 0; j < 5; j++) {
            int marks;
            scanf("%d", &marks);
            students[i].marks += marks;
        }
    }

    // Calculate average marks
    calculateAverage(students, 3);

    return 0;
}
