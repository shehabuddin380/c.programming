#include<stdio.h>
union unit1
{
    char ch[36];
    int n;
};
union unit2
{
    int n;
    float m
};
union unit3
{
    char ch[36];
    float
};
union unit4
{
   double m;
   float n;
};
struct str5
{
    int n;
    int m;
    char l[10];

};
int main()
{
    union unit1 un1;
    union unit2 un2;
    union unit3 un3;
    union unit4 un4;
    struct str5 s5;
    printf("sizeof(un1) = %d\n",sizeof(un1));
    printf("sizeof(un2) = %d\n",sizeof(un2));
    printf("sizeof(un3) = %d\n",sizeof(un3));
    printf("sizeof(un4) = %d\n",sizeof(un4));
    printf("sizeof(s5)= %d\n",sizeof(s5));


    getch();
}
