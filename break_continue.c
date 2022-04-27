/*wap to calculate the sum of numbers (10 numbers max)
     a) If the user enters a negative number, the loop terminates
     b) If the user enters a negative number, it's not added to the result
     ex   a: user enters
     1 - add to sum , 20, add to sum , 0 - terminate the loop and sum  should be printed
     ex b : user enters  1 - add to sum , 20 , add to sum , -1 - dont add to sum - go to next iteration - print sum */
  
  
   #include<stdio.h>
 
  int main()
  {
          int num,num1,sum=0;
          printf("Enter the number: ");
          scanf("%d",&num);
 
          for(int i=0;i<num;i++)
          {
                  printf("Enter number: ");
                  scanf("%d",&num1);
                  if(num1 == 0)
                  {
                          break;
                  }
                  else if(num1 < 0)
                  {
                          continue;
                  }
                  else
                  {
                          sum=sum+num1;
                  }
          }
          printf("Sum is %d\n",sum);
          return 0;
  }