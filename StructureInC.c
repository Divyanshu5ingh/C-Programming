#include<stdio.h>
#include<string.h>
void main()
{
    struct student
    {
        int roll;
        char name[50];
        float marks;
    } s1, s2;
    
    s1.roll = 01;
    strcpy(s1.name, "Divyanshu");
    s1.marks = 98.5;
    
    s2.roll = 02;
    strcpy(s2.name, "Ashish");
    s2.marks = 88.97;
    
    printf("The roll of student 1 is : %d\n", s1.roll);
    printf("The name of student is %s\n", s1.name);
    printf("Marks of student 1 is : %f\n", s1.marks);
    
    printf("The roll of student 2 is : %d\n", s2.roll);
    printf("The name of student is %s\n", s2.name);
    printf("Marks of student 2 is : %f\n", s2.marks);
}