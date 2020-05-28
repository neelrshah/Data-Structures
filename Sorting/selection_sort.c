
//SELECTION SORT

#include<stdio.h>
int a[10];
int i,j,n,temp,min;
void selectionsort(int a[],int n);
void main()
{
   
    printf("\nenter the numbers:\n");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);       
    selectionsort(a,10);
}


void selectionsort(int *a,int n)
{
    
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
                min=j;
        }
 
    if(i!=min)
    {
        temp=a[min];
        a[min]=a[i];
        a[i]=temp;
    }
    }
    printf("\nNUMBERS AFTER SORTING ARE:\n");
    for(i=0;i<n;i++)
        printf("%4d\n",a[i]);
}
/*output:
enter the numbers:
76
46
25
67
46
7
63
673
75
6

NUMBERS AFTER SORTING ARE:
   6
   7
  25
  46
  46
  63
  67
  75
  76
 673
*/
