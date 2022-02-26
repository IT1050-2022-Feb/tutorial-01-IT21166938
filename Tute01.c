/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int sub1,sub2,total;
  float avg;
  printf("enter sub 1:");
  scanf("%d",&sub1);
  printf("enter sub 2:");
  scanf("%d",&sub2);
  total=sub1+sub2;
  avg=total/2;
  printf("avg is %f\n",avg);
  
  return 0;
}

