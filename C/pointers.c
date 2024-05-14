#include <stdio.h>
#include <stdlib.h>


int main(){
    int age  = 30;
    int * pAge = &age;
    double gpa = 3.45;
    double * pGpa = &gpa;
    char Grade = 'a';
    char * pGrade = &Grade;

    printf("age memory add :  %p\n" , &age);
    return 0;
}