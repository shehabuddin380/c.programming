 #include<stdio.h>
 int main()
 {
     int fexam_marks,sexam_marks,final_marks;
     double total_marks;

     fexam_marks=75;

     sexam_marks=68;

     final_marks=90;

     total_marks=fexam_marks/4.0+sexam_marks/4.0+final_marks/2.0;

     printf("%0.lf",total_marks);
     getch();
 }
