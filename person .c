#include<stdio.h>
struct person
{
    int age;
    float salary;


};
int main()
{
    struct person person1,person2;

    printf("enter information for person1:\n\n");
    printf("enar age=");
    scanf("%d",&person1.age);
    printf("enar salary=");
    scanf("%f",&person1.salary);

    printf("person1: \n");
    printf("\tage=%d\n",person1.age);
    printf("\tsalary=%.2lf",person1.salary);


    printf("\n\nenter information for person2:\n\n");
    printf("enar age=");
    scanf("%d",&person2.age);
    printf("enar salary=");
    scanf("%f",&person2.salary);

    printf(" \nperson2: \n");
    printf("\tage=%d\n",person2.age);
    printf("\tsalary=%.2lf",person2.salary);


getch();
}
