 1 /*Implementation of stack using single linked list*/
  2
  3 #include<stdio.h>
  4 #include<stdlib.h>
  5
  6 typedef struct node
  7 {
  8         int data;
  9         struct node *link;
 10 }stack;
 11
 12
 13 void push(stack **top_arg,int data)
 14 {
 15         stack *new=(stack *)malloc(sizeof(stack));
 16         if(new==NULL)
 17         {
 18                 printf("memory not allocated\n");
 19         }
 20         else
 21         {
 22                 new->data=data;
 23                 new->link=NULL;
 24
 25                 if(*top_arg==NULL)
 26                 {
 27                         *top_arg = new;
 28                 }
 29                 else
 30                 {
 31                         new->link = *top_arg;
 32                         *top_arg = new;
 33                 }
 34                 printf("The pushed data=%d\n",(*top_arg)->data);
 35         }
 36
 37 }
 38
 39 void pop(stack **top_arg)
 40 {
 41         if(*top_arg == NULL)
 42         {
 43                 printf("Stackis empty\n");
 44         }
 45         else
 46         {
 47                 stack *temp = *top_arg;
 48                 *top_arg = temp->link;
 49                 printf("The poped element is:%d\n",temp->data);
 50                 free(temp);
 51         }
 52 }
 53
 54 void peek(stack **top_arg)
 55 {
 56         if(*top_arg == NULL)
 57         {
 58                 printf("Stack is empty\n");
 59         }
 60         else
 61         {
 62                 printf("The Top most element is: %d\n",(*top_arg)->data);
 63         }
 64 }
 65
 66
 67 void display(stack **top_arg)
 68 {
 69         stack *temp = *top_arg;
 70         if(*top_arg == NULL)
 71         {
 72                 printf("Stack is empty\n");
 73         }
 74         else
 75         {
 76                 printf("Stack contains:\n");
 77                 while(temp != NULL)
 78                 {
 79                         printf("%d ",temp->data);
 80                         temp = temp->link;
 81                 }
 82                 printf("\n");
 83         }
 84 }
 85 int main()
 86 {
 87         stack *top=NULL;
 88         push(&top,10);
 89         push(&top,20);
 90         display(&top);
 91         push(&top,30);
 92         peek(&top);
 93         pop(&top);
 94         display(&top);
 95         return 0;
 96 }