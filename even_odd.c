  1 /*Write a c program to print all even and odd numbers btwn 1-100
  2   o/p : even numbers are : 2,4,6,....100
  3   odd numbers are : 1,3,5,.....99  */
  4
  5
  6 #include<stdio.h>
  7 int main()
  8 {
  9         int arr_odd[50],arr_even[50];
 10         int j=0,k=0;
 11         for(int i=1;i<=100;i++)
 12         {
 13                 if(i % 2 != 0)
 14                 {
 15                         arr_odd[k] = i;
 16                         k++;
 17                 }
 18                 else
 19                 {
 20                         arr_even[j] = i;
 21                         j++;
 22                 }
 23         }
 24         printf("Even numbers are: ");
 25         for(int i=0;i<50;i++)
 26         {
 27                 printf("%d ",arr_even[i]);
 28         }
 29         printf("\nOdd numbers are: ");
 30         for(int i=0;i<50;i++)
 31         {
 32                 printf("%d ",arr_odd[i]);
 33         }
 34         printf("\n");
 35         return 0;
 36 }