 1 /*Implement Queue using 2 stacks */
  2
  3 #include <stdio.h>
  4 #include<stdio_ext.h>
  5 #define N 5
  6 int s1[N],s2[N];
  7 int top1=-1,top2=-1,count=0;
  8
  9 void push1(int data)
 10 {
 11         if(top1==N-1)
 12         {
 13                 printf("Queue is full\n");
 14         }
 15         else
 16         {
 17                 top1++;
 18                 s1[top1]=data;
 19         }
 20 }
 21
 22 void push2(int data)
 23 {
 24         if(top2==N-1)
 25         {
 26                 printf("Queue is full\n");
 27         }
 28         else
 29         {
 30                 top2++;
 31                 s2[top2]=data;
 32         }
 33 }
 34
 35 int pop1()
 36 {
 37         return s1[top1--];
 38 }
 39
 40 int pop2()
 41 {
 42         return s2[top2--];
 43 }
 44
 45 void enqueue(int x)
 46 {
 47         push1(x);
 48         count++;
 49 }
 50
 51 void dequeue()
 52 {
 53         int i,a,b;
 54         if(top1==-1 && top2==-1)
 55         {
 56                 printf("Queue is empty\n");
 57         }
 58         else
 59         {
 60                 for(i=0;i<count;i++)
 61                 {
 62                         a=pop1();
 63                         push2(a);
 64                 }
 65                 b=pop2();
 66                 printf("The dequeed element is:%d\n",b);
 67                 count--;
 68                 for(i=0;i<count;i++)
 69                 {
 70                         a=pop2();
 71                         push1(a);
 72                 }
 73         }
 74 }
 75
 76 void display()
 77 {
 78         int i;
 79         printf("Queue contains:\n");
 80         for(i=0;i<=top1;i++)
 81         {
 82                 printf("%d ",s1[i]);
 83         }
 84         printf("\n");
 85 }
 86
 87 int main()
 88 {
 89         enqueue(5);
 90         enqueue(2);
 91         enqueue(1);
 92         display();
 93         dequeue();
 94         enqueue(3);
 95         display();
 96         dequeue();
 97         display();
 98
 99         return 0;
100 }
