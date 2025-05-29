#include <stdio.h>
#include <string.h>

#define MAX 100

struct Student {
    int id;
    char name[50];
    float marks;
};

struct Student students[MAX];
int count = 0;

void addStudent() {
    if (count < MAX) {
        printf("Enter ID: ");
        scanf("%d", &students[count].id);
        printf("Enter Name: ");
        scanf(" %[^\n]", students[count].name);
        printf("Enter Marks: ");
        scanf("%f", &students[count].marks);
        count++;
    } else {
        printf("Student limit reached.\n");
    }
}

void displayStudents() {
    printf("\n--- Student List ---\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d, Name: %s, Marks: %.2f\n",
               students[i].id, students[i].name, students[i].marks);
    }
}

int main() {
    int choice;
    while (1) {
        printf("\n1. Add Student\n2. Display Students\n3. Exit\nEnter choice: ");
        scanf("%d", &choice);
        if (choice == 1)
            addStudent();
        else if (choice == 2)
            displayStudents();
        else if (choice == 3)
            break;
        else
            printf("Invalid choice.\n");
    }
    return 0;
}

