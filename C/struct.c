#include <stdio.h>
#include <stdlib.h>

struct Student{
    char name[20];
    char major[10];
    int age;
    double gpa;
};



int main(){
    struct Student student1;
    struct Student student2;
    student1.age = 22;
    student2.gpa = 3.45;
    

    printf("%d\n" , student1.age);
    printf("%f" , student2.gpa);
}