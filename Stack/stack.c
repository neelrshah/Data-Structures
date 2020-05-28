
//stack using array


#include<stdio.h>
#include<stdlib.h>
int push(int n);
int pop();
int traverse();
int tos();
int stack[5],top=-1;
main()
{
int ch,n;
do
{
printf("Enter the choice\n");
printf("1.push\n2.pop\n3.traverse\n4.top of stack\n5.exit");
scanf("%d",&ch);
switch(ch)
{
   case 1:
      {
         push(n);
         break;
       }
   case 2:
       {
             pop();
             break;
       }
   case 3:
        { 
             traverse();
             break;
        }
   case 4:
        {
            tos();
            break;
        }
   case 5:
    {
        exit(0);
    }
        default:
        printf("Wrong input\n");
        }
 }while(ch!=5);
 }
 int push(int n)
          {
          int a;
          if(top>4)
              {
                 printf("stack overflow\n");
             }
             else
              {
              printf("Enter the number to be pushed\n");
        scanf("%d",&a);
          top=top+1;
          stack[top]=a;
             printf("%d is pushed\n",stack[top]);
             }
            }
 int pop()
      {
      if(top==-1)
      printf("\n stack underflow");
      else
          {
             printf("%d is popped\n",stack[top]);
             top=top-1;
          }
      }
int traverse()
        {
        int i;
        if(top==-1)
            {
            printf("Stack is  empty\n");
            }
        else
          {
              for(i=top;i>-1;i--)
                {
                   printf("%d\n",stack[i]);
                }
           }
         }

int tos()
        {
        if(top==-1)
        printf("\n stack empty");
        else
        printf("%dis tos\n",stack[top]);
        }        
        
             /* output=
             Enter the choice
1.push
2.pop
3.traverse
4.top of stack
5.exit1
Enter the number to be pushed
10
10 is pushed
Enter the choice
1.push
2.pop
3.traverse
4.top of stack
5.exit1
Enter the number to be pushed
20
20 is pushed
Enter the choice
1.push
2.pop
3.traverse
4.top of stack
5.exit1
Enter the number to be pushed
30
30 is pushed
Enter the choice
1.push
2.pop
3.traverse
4.top of stack
5.exit1
Enter the number to be pushed
40
40 is pushed
Enter the choice
1.push
2.pop
3.traverse
4.top of stack
5.exit2
40 is popped
Enter the choice
1.push
2.pop
3.traverse
4.top of stack
5.exit3
30
20
10
Enter the choice
1.push
2.pop
3.traverse
4.top of stack
5.exit4
30is tos
Enter the choice
1.push
2.pop
3.traverse
4.top of stack
5.exit5 */

   
   
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
