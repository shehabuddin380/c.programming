 #include<stdio.h>
 int main()
 {
     int year ;
     printf("Enter year: ");
     scanf("%d",&year);

     if(year %400==0)
        printf("1= leap year");
     else if(year%4==0 && year%100!=0)
        printf("2=leap year");
     else
        printf("not leap year");


     getch();
 }
