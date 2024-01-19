#include<stdio.h>
int main()
{
    int choice;
    float temp,convertedTemp;

    printf("temperature conversion menu\n");
    printf("1.farenheit to celsius\n");
    printf("2.celsius to farhenheit\n");
    printf("enter your choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:

    {
        printf("enter the farhenheit temperature: ");
        scanf("%f",&temp);
        convertedTemp = (temp-32)/1.8;
        printf("the temperature in celsius is: %f\n",convertedTemp);
        break;

    }

    case 2:

    {
        printf("enter the celsius temperature: ");
        scanf("%f",&temp);
        convertedTemp = (1.8*temp)+32;
        printf("the temperature in farhenheit is: %f\n",convertedTemp);

        break;

    }

defaulf :
    printf("not a correct");


    }


    getch();
}
