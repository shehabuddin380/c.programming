#include<stdio.h>
union test
{
    int i,y;
  //  float y;

};

int main()
{
    union test t1;
    t1.i=10;
    printf("t1.i=%d\n",t1.i);
    printf("t1.y=%d\n",t1.y);

    t1.y=20;
    printf("t1.i=%d\n",t1.i);
    printf("t1.y=%d",t1.y);

    getch();
}
