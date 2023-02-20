#include<stdio.h>
typedef struct
{
    int roll;
    char name[20];
    float cgpa;
} student;

int main()
{
    student s;
    printf("Enter the name of student:\n");
    scanf("%s",s.name);
    printf("Enter the  roll number of student:\n");
    scanf("%d",&s.roll);
    printf("Enter the CGPA of student:\n");
    scanf("%f",&s.cgpa);

    printf("Student info :\n");
    printf("Student name :%s\n",s.name);
    printf("Roll Number :%d\n",s.roll);
    printf("CGPA:%2.1f\n",s.cgpa);

    return 0;
}
