#include <stdio.h>
 int main()
 {
     int n = 1;
     while(n <= 100) {
         printf("%d\n", n);
         n++;  //1,2,3,4,5,6,7,8,9..........100 |
         if(n > 10) { // ??????
             break;
         }
     }
     return 0;
 }
