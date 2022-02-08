/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>
int main() {
   float mark1,mark2,total,avg;
   //input 2 subject marks//
   printf("Enter subjrct 01 mark :");
   scanf("%f",&mark1);
   printf("Enter the subject 02 mark :");
   scanf("%f",&mark2);
   //calculate total and avarge//
   total=mark1+mark2;
   avg=total/2
   
   //print all results//
   printf("Total mark :%.2f\n",total);
   printf("Avarage mark :%.2f\n".avg);
  
  return 0;
}

