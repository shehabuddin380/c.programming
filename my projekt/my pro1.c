#include<stdio.h>
int main()
{
    while(1)
    {
        int choice,num1,num2,total,i;
        // float num1,num2,total;
        float tempe,convertedtempe,num;

        printf("\nall temperature conversion menu\n");
        printf("1. celsius to Fahrenheit\n");
        printf("2. fahrenheit to celsius\n");
        printf("3. calculaton or (+)\n");
        printf("4. calculaton or (-)\n");
        printf("5. calculaton or (*)\n");
        printf("6. calculaton or (/)\n");
        printf("7. calculaton or %\n");
        printf("8. Decimal to octal\n");
        printf("9. Octal to desimal\n");
        printf("10. Decimal to Hexa_decimal\n");
        printf("11. hexa_decimal to decimal\n");
        printf("12. Octal to hexa_decimal \n");
        printf("13. hexa_decimal to Octal\n");
        printf("14. How to swap two numbers with temporary variable\n");
        printf("15. Math--- Absolute value\n");
        printf("16. Math--- Square root\n");
        printf("17. Math--- power  (x^y)t\n");
        printf("18. chak your number Even an odd\n");
        printf("19. 1>2 and1<2 large number\n");
        printf("20. Multiplication Table\n");
        printf("21. Factorial number \n");
        printf("22. Prime number\n");
        printf("23. GCD and LCM \n");
        printf("24. To Reverse A Number \n");
        printf("25. check Palindrome number\n");
        printf("26. check Armstrong Number \n");
        printf("27. Chack Armstrong Number\n");
        printf("28. Counting number of a digit in an integer\n");

        printf("\nEnter your coice number: ");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
        {
            printf("Enter the celsius tempareter: ");
            scanf("%f",&tempe);
            convertedtempe=(1.8 * tempe)+32;
            printf("Fahrenheit=%f\n",convertedtempe);
            break;
        }
        case 2:
        {
            printf("Enter the fahrenheit tempareter: ");
            scanf("%f",&tempe);
            convertedtempe=(tempe-31)/1.8;
            printf("celsius=%f\n",convertedtempe);
            break;
        }
        case 3:
        {
            printf("Enter 2 number : ");
            scanf("%d %d",&num1,&num2);
            total=num1+num2;
            printf("total=%d + %d=%d",num1,num2,num1+num2);
            break;
        }
        case 4:
        {
            printf("Enter 2 number : ");
            scanf("%d %d",&num1,&num2);
            total=num1-num2;
            printf("total=%d - %d=%d",num1,num2,num1-num2);
            break;
        }
        case 5:
        {
            printf("Enter 2 number : ");
            scanf("%d %d",&num1,&num2);
            total=num1*num2;
            printf("total=%d * %d=%d",num1,num2,num1*num2);
            break;
        }
        case 6:
        {
            printf("Enter 2 number : ");
            scanf("%d %d",&num1,&num2);
            total=num1/num2;
            printf("total=%d / %d=%d",num1,num2,num1/num2);
            break;
        }
        case 7:
        {
            printf("Enter 2 number : ");
            scanf("%d  %d",&num1,&num2);
            total=num1 % num2;
            printf("total=%d % %d=%d",num1,num2,num1%num2);
            break;
        }
        case 8:
        {
            printf("decimal number: ");
            scanf("%d",&num);
            printf("octal number=%o\n",num);
            break;
        }
        case 9:
        {
            printf("octal number: ");
            scanf("%o",&num);
            printf("decimal number=%d",num);
            break;
        }
        case 10:
        {
            printf("decimal number: ");
            scanf("%d",&num);
            printf("hexa_decimal number =%x\n",num);
            break;
        }
        case 11:
        {
            printf("hexa_decimal number: ");
            scanf("%x",&num);
            printf("Decimal number=%d\n",num);
            break;
        }
        case 12:
        {
            printf("Octal number: ");
            scanf("%o",&num);
            printf("hexa_decimale number=%x\n",num);
            break;
        }
        case 13:
        {
            printf("hexa_decimal number: ");
            scanf("%x",&num);
            printf("octal number=%o\n",num);
            break;
        }
        case 14:
        {
            int num1,num2;
            printf("Num1= ");
            scanf("%d",&num1);
            printf("num2= ");
            scanf("%d",&num2);
            int tempe;
            tempe=num1;
            num1=num2;
            num2=tempe;
            printf("\tnum1 =%d\n",num1);
            printf("\tnum2 =%d\n",num2);
            break;

        }
        case 15:
        {
            int a,result;
            printf("Enter abs velue: ");
            scanf("%d",&a);
            result=abs(a);
            printf("\t\t  %d",result);
            break;
        }
        case 16:
        {
            int x;
            printf("Enter Squar number: ");
            scanf("%d",&x);
            double result =sqrt(x);
            printf("%d squar number = %.2lf",x,result);
            break;
        }
        case 17:
        {
            int x,y;
            printf("Enter your mane number : ");
            scanf("%d",&x);
            printf("How many numbers do you want to receive: ");
            scanf("%d",&y);
            double result=pow(x,y);
            printf("power=%.2lf",result);
            break;
        }
        case 18:
        {
            int num;
            printf("Enter an integer: ");
            scanf("%d",&num);
            if(num%2==0)
                printf("\t%d is Even",num);
            if(num%2!=0)
                printf("\t%d is odd",num);
            break;
        }
        case 19:
        {
            double num1,num2;
            printf("Enter first number: ");
            scanf("%lf",&num1);
            printf("Enter second number: ");
            scanf("%lf",&num2);
            if(num1>num2)
                printf("large number=%.2lf",num1);
            else if(num1<num2)
                printf("large number=%.2lf",num2);
            else
            {
                printf("%.2lf %.2lf\n",num1,num2);
                printf("\aNumber is equal");
            }
            break;
        }
        case 20:
        {
            int i,num;
            printf("Enter any number: ");
            scanf("%d",&num);
            for(i=1; i<=10; i++)
            {
                printf("%d X %d=%d\n",num,i,num*i);
            }
            break;
        }
        case 21:
        {
            int i,n,fact=1;
            printf("Enter any positive numbe: ");
            scanf("%d",&n);

            for(i=1; i<=n; i++)
            {
                fact=fact*i;
            }
            printf("%d Factorial number=%d\n",n,fact);
            break;
        }
        case 22:
        {
            int num,i,count=0;
            printf("Entar any positive number: ");
            scanf("%d",&num);
            for(i=2; i<=num; i++)
            {
                if(num%i ==0)
                    count++;
                break;
            }
            if(count==0)
                printf("\t\n%d is prime number \n",num);
            else
                printf("\a\t\nnot prime number %d\n",num);

            break;
        }
        case 23:
        {
            int num1,num2,n1,n2,rem,gcd,lcm;
            printf("Enter your GCD number: ");
            scanf("%d",&num1);
            printf("Enter your LCM number: ");
            scanf("%d",&num2);
            n1=num1;
            n2=num2;
            while(n2!=0)
            {
                rem=n1%n2;
                n1=n2;
                n2=rem;
            }
            gcd=n1;
            lcm=(num1*num2)/gcd;
            printf("gcd =%d\n",gcd);
            printf("lcm=%d\n",lcm);
            break;
        }
        case 24:
        {
            int num,sum,r,temp;

            printf("how much reverse Number: ");
            scanf("%d",&num);

            sum=0;
            temp=num;
            while(temp!=0)
            {
                r=temp%10;
                sum=sum*10+r;
                temp=temp/10;
            }
            printf("%d reverse Number=%d\n",num,sum);
            break;
        }
        case 25:
        {
            int num,sum,r,temp;

            printf("how much reverse Number: ");
            scanf("%d",&num);

            sum=0;
            temp=num;
            while(temp!=0)
            {
                r=temp%10;
                sum=sum*10+r;
                temp=temp/10;
            }
            if(num==sum)
                printf("Palindrome number\n");
            else
                printf("\anot Palindrome number\n");
            break;
        }
        case 26:
        {
            int num,r,sum,temp;
            printf("Armstrong Number : ");
            scanf("%d",&num);
            sum=0;
            temp=num;
            while(temp!=0)
            {
                r=temp%10;
                sum=sum+r*r*r;
                temp=temp/10;
            }
            if(sum==num)
                printf("%d Armstrong Number \n",num);
            else
                printf("\a%d Not Armstrong Number \n",num);
            break;
        }
        case 27:
        {
            int initial_num,final_num,temp,r,i,sum=0;
            printf("initial_num: ");
            scanf("%d",&initial_num);

            printf("final_num: ");
            scanf("%d",&final_num);

            for( i=initial_num; i<=final_num; i++)
            {
                temp = i ;
                while(temp !=0)
                {
                    r = temp%10;
                    sum = sum+r*r*r ;
                    temp = temp/10;
                }
                if(sum==i)
                {
                    printf("Armstrong Number= %d\n",i);
                }
                sum=0;
            }
            break;
        }
        case 28:
        {
            int num,count=0;
            printf("Enter a digit : ");
            scanf("%d",&num);
            while(num!=0)
            {
                num=num/10;
                ++count;
            }
            printf("counting number=%d\n",count);
            break;
        }



        default :
            printf("not a valid digit\n");

        }
    }
    getch();
}
