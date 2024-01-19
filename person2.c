#include<stdio.h>

struct person
{
    int age ;
    float salary;
};
int main()
{
    struct person person1={25,250.50};
    struct person person2,person3;
    person2.age=29;
    person2.salary=2500.50;

    person3=person2;

    if(person2.age==person3.age&&person2.salary==person3.salary)
        printf("person1 equal person2");
    else
        printf("person not equal person2");



    getch();
}
