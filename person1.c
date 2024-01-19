#include<stdio.h>
struct person
{
    int age;
    float salary;


};
int main()
{
    struct person person1={27,6355.64},person2={35,4783.50},person3;
    /*struct person person2,person3;

    person2.age=23;
    person2.salary=7353.50;*/

    person3=person2;

    printf("person 1: \n");
    printf("age= %d",person1.age);
    printf("\nsalary= %lf",person1.salary);

    printf("\n\nperson 2: \n");
    printf("age=%d",person2.age);
    printf("\nsalary=%lf ",person2.salary);

    printf("\n\nperson 3: \n");
    printf("age= %d",person3.age);
    printf("\nsalary=%lf",person3.salary);


    getch();
}
