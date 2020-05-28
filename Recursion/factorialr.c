
int fact(int);
int main()
    {
     int n,a;
     printf("enter the number\n");
     scanf("%d",&n);
     a=fact(n);
     printf("%d",a);
    }
        int fact(int n)
        {
         if(n==0)
         {
             return 1;
         }
         else
             return(n*fact(n-1));
        }
    
    /* output=
    enter the number
    5
    120           
         


