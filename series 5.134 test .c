
//1^2*3^2*5^3*.....n^2
 #include<stdio.h>
int main()
{
    int n,i,r=1;
    printf("enta n number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i=i+2)
    {
        r=r*i*i*i;

    }
    printf("=%d",r);


    getch();
}
