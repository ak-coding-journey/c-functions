#include <stdio.h>

struct student
{
    int id;
    float marks;
};

void printStudent(struct student s)
{
    printf("ID: %d\n", s.id);
    printf("Marks: %.2f\n\n", s.marks);
}

int main()
{
    struct student original;
    struct student backup;

    // Step 1: give values to original student
    original.id = 101;
    original.marks = 85.50;

    // Step 2: create backup copy
    backup = original;

    // Step 3: modify original
    original.marks = 95.00;

    // Step 4: print both
    printf("Original Student:\n");
    printStudent(original);

    printf("Backup Student:\n");
    printStudent(backup);

    return 0;
}