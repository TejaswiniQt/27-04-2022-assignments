  1 /*A sequence must be made with the following constraint on its values.
  2 Constraint: The number of consecutive same elements in the sequence should be same as the value.
  3 Example: 1 2 2 3 3 3 4 4 4 4 is valid (input1)
  4 1 2 3 3 3  is invalid. (input2)
  5 Write a program that checks whether a given input sequence is valid.
  6 Input format is just a sequence of integers.
  7 Output format should be one of the following:
  8 input1  : sequence is valid
  9 input2  : sequence is not valid */
 10
 11
 12 #include<stdio.h>
 13 #define SIZE 10
 14 int main()
 15 {
 16         int arr[SIZE];
 17         printf("Enter array elements: ");
 18         for(int i = 0;i < SIZE;i++)
 19         {
 20                 scanf("%d", &arr[i]);
 21         }
 22         int k = 0, j, flag = 0;
 23         for(int i = arr[0];i <= arr[SIZE-1]; i++)
 24         {
 25                 for(j = k;j < k+i;j++)
 26                 {
 27                         if(arr[j] != i)
 28                         {
 29                                 flag = 1;
 30                                 break;
 31                         }
 32                 }
 33                 if(flag == 1)
 34                 {
 35                         break;
 36                 }
 37                 else
 38                 {
 39                         k = j;
 40                 }
 41         }
 42         if(flag == 0)
 43         {
 44                 printf("Sequence is valid\n");
 45         }
 46         else
 47         {
 48                 printf("Sequence is not valid\n");
 49         }
 50 return 0;
 51 }
 