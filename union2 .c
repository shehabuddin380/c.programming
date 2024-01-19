#include<stdio.h>
union test1
{
    int i,j;
};
union test2
{
    char ch;
    int m
};
union test3
{
    char ch[50];
    double n;

};
int main()
{
    union test1 t1;
    union test2 t2;
    union test3 t3;
    printf("sizeof(t1)=%d\n",sizeof(t1));
    printf("sizeof(t2)=%d\n",sizeof(t2));
    printf("sizeof(t3)=%d\n",sizeof(t3));


    getch();
}
