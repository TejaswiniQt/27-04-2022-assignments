  1 /*Program to explain all storage classes scope.*/
  2
  3
  4 #include<stdio.h>
  5 int d;
  6 void static_storage();
  7
  8 int main()
  9 {
 10
 11         auto int a=10;  //auto storage class,has block scope,lifetime is within the block
 12         printf("auto storage class a=%d\n",a);
 13         for(int i = 0; i< 3; i++)
 14         {
 15                 static_storage();
 16         }
 17
 18         register int c=5; // variable c is allocated memory in the CPU register. The initial default value of c is 0.
 19         printf("register int=%d\n",c);  //we cant access address of a register it gives compile time error
 20
 21         extern int d; // variable d is defined globally, the memory will not be allocated to d
 22         printf("extern int d=%d\n",d);
 23         return 0;
 24 }
 25
 26
 27
 28 void static_storage()
 29 {
 30         static int a = 10;   //static storage class, declared locally,has a block scope,but lifetime is throught the program
 31         static int b = 24;
 32         printf("static int a=%d, static int b=%d \n",a,b);
 33         a++;
 34         b++;
 35 }