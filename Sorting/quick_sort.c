
//QUICK SORT


#include<stdio.h>

void quicksort(int a[10],int low,int high)

{
      int i,j,x,pivot;
   if(low<high)
    {
       pivot=low;
       i=low;
       j=high;
    
    while(i<j)
   {
     while(a[i]<=a[pivot]&&i<high)
     i++;
     while(a[j]>a[pivot])
     j--;
       if(i<j)
    {
     x=a[i];
     a[i]=a[j];
     a[j]=x;
    }
   }
 x=a[pivot];
 a[pivot]=a[j];
 a[j]=x;
 quicksort(a,low,j-1);
 quicksort(a,j+1,high);
}
}
 
  int main()
{
  int i,count,a[10];
  printf("Enter elements\n");
  scanf("%d",&count);
  printf("Enter %d elements\n",count);
  for(i=0;i<count;i++)
  scanf("%d",&a[i]);
  quicksort(a,0,count-1);
printf("the sorted element\n");
   for(i=0;i<count;i++)
   printf("%4d",a[i]);
   return 0;
}  
   
   
/*output:
Enter elements
5
Enter 5 elements
8
6
9
5 
4
the sorted element
   4   5   6   8   9*/   
 
