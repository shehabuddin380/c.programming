
//(4/3) * pi * R3. Consider (assign) for pi the value 3.14159.
#include<stdio.h>
int main()
{
    double R,VOLUME;
    scanf("%lf",&R);
    VOLUME=(4.0/3)*3.14159*(R*R*R);
    printf("VOLUME = %.3lf\n",VOLUME);



    return 0;
}
