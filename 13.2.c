#include <stdio.h>

union Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    union Student s;

    printf("Enter information of students:\n");

    printf("Enter name: ");
    scanf("%s", s.name);
    printf("Name: %s\n", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Roll: %d\n", s.roll);

    printf("Enter marks: ");
    scanf("%f", &s.marks);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}
