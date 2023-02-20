#include<stdio.h>
typedef struct
{
    int roll;
    float subjects[3];
    int semester;
} student;

    float avg(student *a)
{
    float avg;
    avg=((*a).subjects[0]+(*a).subjects[1]+(*a).subjects[2])/3.0;
    return avg;
}

int main()
{
    student s;
    printf("Enter roll number of the student:\n");
    scanf("%d",&s.roll);
    printf("Enter semester number of the student:\n");
    scanf("%d",&s.semester);
    printf("Enter the marks in three subjects:\n");

    int i;
    for(i=0;i<3;i++)
    {
        scanf("%f",&s.subjects[i]);
    }

    float subjectsaverage;
    subjectsaverage=avg(&s);

    printf("Student info:\n\n");
    printf("Roll Number:%d\n",s.roll);
    printf("Semester:%d\n",s.semester);
    printf("Average:%1.2f",subjectsaverage);

    return 0;
}
