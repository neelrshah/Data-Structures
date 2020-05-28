
#include<stdio.h>
int fibbo(int);
int main()
    {
     int n,a,i;
     printf("enter the number\n");
     scanf("%d",&n);
     for(i=0;i<n;i++)
        {    
         a=fibbo(i);
         printf("%d\n",a);
        }
    }
        int fibbo(int n)
        {
         if(n==0||n==1)
         {
             return n;
         }
         else
             return(fibbo(n-2)+fibbo(n-1));
        }
        
        /* output
        enter the number
    9
    0
    1
    1
    2
    3
    5
    8
    13
    21

