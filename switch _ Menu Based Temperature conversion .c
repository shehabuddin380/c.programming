#include<stdio.h>
int main()
{
    int choice;
    float temp, conversion;

    printf("temperature conversion menu\n");
    printf("1=Fahrenheit to celsius\n");
    printf("2=celsius to Fahrenheit \n");
    printf("3=Calculaton\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);



    switch(choice )
    {
    case 1 :
        {
            printf("\nEnter Tha Fahrenheit temperature: ");
            scanf("%f",&temp);
             conversion=(temp-32)/1.8;
             printf("\nthe temperature in celsiu : %f",conversion);
             break;
        }
    case 2 :
        {
            printf("\nEnter the celsius temperatur:  ");
            scanf("%f",&temp);
            conversion=(1.8*temp)+32;
            printf("\nthe temperature in fahrenheit: %f",conversion);
            break;
        }


    default :
        printf("\nnot a correcter option");
    }





    getch();
}
