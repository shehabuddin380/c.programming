#include<stdio.h>
struct book
{
    char name[20];
    int price
};

int main()
{
   typedef struct  book Book;
   Book b ={"Shihab Ahmed", 3753};

   printf("book name=%s\n",b.name);
   printf("book price=%d\n",b.price);



    getch();
}
