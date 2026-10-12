#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// struct Student{
//     char name[50];
//     int age;
//     float gpa;
//     bool isFullTime;
// }

typedef struct {
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
}Student;

void printStudent(Student student);

int main(){

    Student student1 = {"abc", 30, 4.5, true};
    Student student2 = {0};

    strcpy(student2.name, "sandy");
    student2.age = 27;
    student2.gpa = 4.0;
    student2.gpa = false;

    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("GPA: %.2f\n", student1.gpa);
    printf("Full-time: %s\n", student1.isFullTime ? "Yes" : "No");

    printStudent(student2);

    return 0;
}

void printStudent(Student student){

    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("GPA: %.2f\n", student.gpa);
    printf("Full-time: %s\n", student.isFullTime ? "Yes" : "No");    
}