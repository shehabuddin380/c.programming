#include<stdio.h>
int main()
{
int x,y,sum;
printf("Enter x number: ");
scanf("%d",&x);
printf("Enter y number: ");
scanf("%d",&y);
int *ptr1,*ptr2;

ptr1 = &x;
ptr2 = &y;

sum= *ptr1 + *ptr2;
printf("\nsum=%d\n",sum);

getch();
}
