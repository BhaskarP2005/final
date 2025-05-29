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



#include <stdio.h>
#include <string.h>

#define MAX 100

struct Student {
    int id;
    char name[50];
    float totalFee;
    float feePaid;
};

struct Student students[MAX];
int count = 0;

void addStudent() {
    if (count < MAX) {
        printf("Enter ID: ");
        scanf("%d", &students[count].id);
        printf("Enter Name: ");
        scanf(" %[^\n]", students[count].name);
        printf("Enter Total Fee: ");
        scanf("%f", &students[count].totalFee);
        printf("Enter Fee Paid: ");
        scanf("%f", &students[count].feePaid);
        count++;
    } else {
        printf("Limit reached.\n");
    }
}

void displayStudents() {
    printf("\n--- Fee Details ---\n");
    for (int i = 0; i < count; i++) {
        float due = students[i].totalFee - students[i].feePaid;
        printf("ID: %d, Name: %s, Paid: %.2f, Due: %.2f\n",
               students[i].id, students[i].name,
               students[i].feePaid, due);
    }
}

int main() {
    int choice;
    while (1) {
        printf("\n1. Add Fee Record\n2. Display Records\n3. Exit\nEnter choice: ");
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
#include <stdio.h>
#include <string.h>

#define MAX 100

struct Payroll {
    int id;
    char name[50];
    float basicPay;
    float deductions;
};

struct Payroll records[MAX];
int count = 0;

void addPayroll() {
    if (count < MAX) {
        printf("Enter ID: ");
        scanf("%d", &records[count].id);
        printf("Enter Name: ");
        scanf(" %[^\n]", records[count].name);
        printf("Enter Basic Pay: ");
        scanf("%f", &records[count].basicPay);
        printf("Enter Deductions: ");
        scanf("%f", &records[count].deductions);
        count++;
    } else {
        printf("Record limit reached.\n");
    }
}

void displayPayroll() {
    printf("\n--- Payroll Records ---\n");
    for (int i = 0; i < count; i++) {
        float netPay = records[i].basicPay - records[i].deductions;
        printf("ID: %d, Name: %s, Net Pay: %.2f\n",
               records[i].id, records[i].name, netPay);
    }
}

int main() {
    int choice;
    while (1) {
        printf("\n1. Add Payroll\n2. Display Payrolls\n3. Exit\nEnter choice: ");
        scanf("%d", &choice);
        if (choice == 1)
            addPayroll();
        else if (choice == 2)
            displayPayroll();
        else if (choice == 3)
            break;
        else
            printf("Invalid choice.\n");
    }
    return 0;
}
#include <stdio.h>
#include <string.h>

#define MAX 100

struct Inventory {
    int itemId;
    char itemName[50];
    int quantity;
    char issuedTo[50];
};

struct Inventory items[MAX];
int count = 0;

void addItem() {
    if (count < MAX) {
        printf("Enter Item ID: ");
        scanf("%d", &items[count].itemId);
        printf("Enter Item Name: ");
        scanf(" %[^\n]", items[count].itemName);
        printf("Enter Quantity: ");
        scanf("%d", &items[count].quantity);
        printf("Issued To (Student Name): ");
        scanf(" %[^\n]", items[count].issuedTo);
        count++;
    } else {
        printf("Inventory full.\n");
    }
}

void displayItems() {
    printf("\n--- Inventory Records ---\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d, Name: %s, Qty: %d, Issued To: %s\n",
               items[i].itemId, items[i].itemName,
               items[i].quantity, items[i].issuedTo);
    }
}

int main() {
    int choice;
    while (1) {
        printf("\n1. Add Item\n2. Display Items\n3. Exit\nEnter choice: ");
        scanf("%d", &choice);
        if (choice == 1)
            addItem();
        else if (choice == 2)
            displayItems();
        else if (choice == 3)
            break;
        else
            printf("Invalid choice.\n");
    }
    return 0;
}
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
        printf("Enter Marks (out of 100): ");
        scanf("%f", &students[count].marks);
        count++;
    } else {
        printf("Limit reached.\n");
    }
}

void generateReport() {
    printf("\n--- Student Report ---\n");
    for (int i = 0; i < count; i++) {
        char grade;
        if (students[i].marks >= 90) grade = 'A';
        else if (students[i].marks >= 75) grade = 'B';
        else if (students[i].marks >= 60) grade = 'C';
        else if (students[i].marks >= 50) grade = 'D';
        else grade = 'F';

        printf("ID: %d, Name: %s, Marks: %.2f, Grade: %c\n",
               students[i].id, students[i].name, students[i].marks, grade);
    }
}

int main() {
    int choice;
    while (1) {
        printf("\n1. Add Student\n2. Generate Report\n3. Exit\nEnter choice: ");
        scanf("%d", &choice);
        if (choice == 1)
            addStudent();
        else if (choice == 2)
            generateReport();
        else if (choice == 3)
            break;
        else
            printf("Invalid choice.\n");
    }
    return 0;
}

