#include<stdio.h>
typedef struct
{
    int roll;
    char name[20];
    float cgpa;
} student;

void ptrdis(student *a)
{
    printf("Student info:\n");
    printf("Student name:%s\n",(*a).name);
    printf("Roll Number:%d\n",(*a).roll);
    printf("CGPA:%2.1f\n",(*a).cgpa);
}

int main()
{
    student s;
    printf("Enter name of the student:\n");
    scanf("%s",s.name);
    printf("Enter roll number of the student:\n");
    scanf("%d",&s.roll);
    printf("Enter CGPA of the student:\n");
    scanf("%f",&s.cgpa);

    printf("\n");

    ptrdis(&s);

    return 0;
}

