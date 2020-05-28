
//BUBBLE SORT


#include<stdio.h>
int i,j,n,tmp;
void main()
{
    printf("\nenter the number of elements:\n");
    scanf("%d",&n);
    int a[n];
    printf("\nenter the numbers:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                tmp=a[j+1];
                a[j+1]=a[j];
                a[j]=tmp;
            }
        }
    }
    printf("\nnumbers after sorting are:\n");
    for(i=0;i<n;i++)
        printf("%4d\n",a[i]);
}

/*output:
enter the number of elements
4

enter the numbers:
45
36
56
23

numbers after sorting are:
  23
  36
  45
  56
