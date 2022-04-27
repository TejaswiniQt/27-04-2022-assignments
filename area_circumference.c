/*Program to calculate area and circumference of a circle.*/
  
#include<stdio.h>
#define PI 3.142
int main()
{
           int rad;
           float area,circum;
           printf("Enter the radius:");
          scanf("%d",&rad);
          area=(PI *rad  *rad);
          circum=(2 * PI * rad);
          printf("The area of a cicle=%f\n",area);
          printf("The circumference of a circle=%f\n",circum);
          return 0;
 }