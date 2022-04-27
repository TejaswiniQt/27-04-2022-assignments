  1 /*take 2 double integers and an i/p from user :
  2   if "a" , add the integers and print "sum is .." ,
  3   if "s" , subtract the integers and print "diff is .." ,
  4   default case : print "defaut case- noaction"*/
  5
  6 #include<stdio.h>
  7 int main()
  8 {
  9         char c;
 10         double first,second,sum=0,diff=0;
 11         printf("Enter the operation to perform 'a' for addition 's' for subtraction: ");
 12         scanf("%c",&c);
 13         printf("Enter two operands: ");
 14         scanf("%lf %lf",&first,&second);
 15         switch(c)
 16         {
 17                 case 'a':
 18                         sum=first+second;
 19                         printf("The sum = %.1lf\n",sum);
 20                         break;
 21                 case 's':
 22                         diff=first-second;
 23                         printf("The difference = %.1lf\n",diff);
 24                         break;
 25                 default:
 26                         printf("default case-noaction:\n");
 27                         return 0;
 28         }
 29         return 0;
 30 }
~               