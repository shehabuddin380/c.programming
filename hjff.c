#include <stdio.h>

int main()
 {
    double pi = 3.1416;

    for (int i = 1; i <= 100; i++)
        {
        printf("π with %d decimal places: %.*lf\n",i,i,pi);
        }

    getch();
}
