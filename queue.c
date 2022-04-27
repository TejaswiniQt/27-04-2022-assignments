 1 /*********Implementation of  queue using sll*********/
  2
  3
  4 #include<stdio.h>
  5 #include<stdlib.h>
  6
  7 typedef struct node
  8 {
  9         int data;
 10         struct node *link;
 11 }queue;
 12
 13
 14 void enque(int data,queue **front_arg,queue **rear_arg);
 15 void display(queue **front_arg,queue **rear_arg);
 16 void deque(queue **front_arg,queue **rear_arg);
 17 void front_element(queue **front_arg,queue **rear_arg);
 18
 19 int main()
 20 {
 21         queue *front=NULL, *rear=NULL;
 22
 23         enque(10,&front,&rear);
 24         enque(20,&front,&rear);
 25         display(&front,&rear);
 26         enque(30,&front,&rear);
 27         front_element(&front,&rear);
 28         deque(&front,&rear);
 29         display(&front,&rear);
 30         return 0;
 31 }
 32
 33 void enque(int data,queue **front_arg,queue **rear_arg)
 34 {
 35         queue *new=(queue *)malloc(sizeof(queue));
 36         if(new==NULL)
 37         {
 38                 printf("Memory not allocated\n");
 39         }
 40         else
 41         {
 42                 new->data=data;
 43                 new->link=NULL;
 44
 45                 if(*front_arg==NULL && *rear_arg==NULL)
 46                 {
 47                         *front_arg = new;
 48                         *rear_arg = new;
 49                 }
 50                 else
 51                 {
 52                         (*rear_arg)->link = new;
 53                         *rear_arg = new;
 54                 }
 55                 printf("The enqued element is %d\n",(*rear_arg)->data);
 56         }
 57 }
 58
 59
 60 void display(queue **front_arg,queue **rear_arg)
 61 {
 62         queue *temp = *front_arg;
 63
 64         if(*front_arg==NULL && *rear_arg==NULL)
 65         {
 66                 printf("The queue is empty\n");
 67         }
 68         else
 69         {
 70                 printf("The queue contains:\n");
 71                 while(temp != NULL)
 72                 {
 73                         printf("%d ",temp->data);
 74                         temp=temp->link;
 75                 }
 76                 printf("\n");
 77         }
 78 }
 79
 80 void deque(queue **front_arg,queue **rear_arg)
 81 {
 82         queue *temp = *front_arg;
 83         if(*front_arg==NULL && *rear_arg==NULL)
 84         {
 85                 printf("The queue is empty\n");
 86         }
 87         else
 88         {
 89                 printf("The dequed element is %d\n",(*front_arg)->data);
 90                 *front_arg = (*front_arg)->link;
 91
 92                 if(*front_arg==NULL)
 93                         *rear_arg=NULL;
 94
 95                 free(temp);
 96         }
 97 }
 98
 99 void front_element(queue **front_arg,queue **rear_arg)
100 {
101         if(*front_arg==NULL && *rear_arg==NULL)
102         {
103                 printf("The queue is empty\n");
104         }
105         else
106         {
107                 printf("The first element in the queue is %d\n",(*front_arg)->data);
108         }
109 }
110