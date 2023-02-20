#include<stdio.h>
typedef struct

{
    int id;
    char name[30];
    double basicsalary;
    double grosssalary;
} 
employee;

void empinfodis(employee *a)
{
    printf("Employee-1 info:\n");
    printf("Name:%s\n",(*a).name);
    printf("ID:%d\n",(*a).id);
    printf("BasicSalary:%lf\n",(*a).basicsalary);

    (*a).grosssalary=(*a).basicsalary+((0.1)*((*a).basicsalary))+((0.2)*((*a).basicsalary));

    printf("GrossSalary:%lf\n",(*a).grosssalary);

    printf("Employee-2 info:\n");
    printf("Name:%s\n",(*(a+1)).name);
    printf("ID:%d\n",(*(a+1)).id);
    printf("BasicSalary:%lf\n",(*(a+1)).basicsalary);

    (*(a+1)).grosssalary=(*(a+1)).basicsalary+((0.1)*((*(a+1)).basicsalary))+((0.2)*((*(a+1)).basicsalary));

    printf("GrossSalary:%lf\n",(*(a+1)).grosssalary);

    printf("Employee-3 info:\n");
    printf("Name:\%s\n",(*(a+2)).name);
    printf("ID:%d\n",(*(a+2)).id);
    printf("BasicSalary:%lf\n",(*(a+2)).basicsalary);

    (*(a+2)).grosssalary=(*(a+2)).basicsalary+((0.1)*((*(a+2)).basicsalary))+((0.2)*((*(a+2)).basicsalary));

    printf("GrossSalary:%lf\n",(*(a+2)).grosssalary);
}

int main()
{
    employee e[3];

    printf("Enter name of employee-1:\n");
    scanf("%s",e[0].name); 
    printf("Enter ID of employee-1:\n");
    scanf("%d",&e[0].id);
    printf("Enter basicsalary of employee-1:\n");
    scanf("%lf",&e[0].basicsalary);

    printf("Enter name of employee-2:\n");
    scanf("%s",e[1].name);
    printf("Enter ID of employee-2:\n");
    scanf("%d",&e[1].id);
    printf("Enter basicsalary of employee-2:\n");
    scanf("%lf",&e[1].basicsalary);

    printf("Enter name of employee-3:\n");
    scanf("%s",e[2].name);
    printf("Enter ID of employee-3:\n");
    scanf("%d",&e[2].id);
    printf("Enter basic salary of employee-3:\n");
    scanf("%lf",&e[2].basicsalary);

    empinfodis(&e[0]);

    return 0;
}
