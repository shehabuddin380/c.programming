#include<stdio.h>
struct Person
{
    char name[100];
    int age;
    float salary;
};
void dispaly(struct Person m)
{
    printf("\nname: %s\n",m.name);
    printf("age: %d\n",m.age);
    printf("salary: %f\n",m.salary);
}
int main()
{
    struct Person person1,person2;
     strcpy (person1.name,"sakil");
    person1.age=24;
    person1.salary=3100.500;
    dispaly(person1);

    strcpy (person2.name,"shihab");
    person2.age=32;
    person2.salary=3500.500;

    dispaly(person2);




    getch();
}
