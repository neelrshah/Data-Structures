
//BUCKET SORT

#include<stdio.h>
void bucketsort(int a[],int n);
int max(int a[],int n)
{
  int max=a[0],i;
  for(i=0;i<n;i++)
  {
   if(max<a[i])
   max=a[i];
  }
 return max;
}
void bucketsort(int a[],int n)
{
 int bucket[10][10],bucketcount[10];
 int i,j,k,rem,divisor=1,loop=0,large,m;
 large=max(a,n);
 printf("the largest number is:%d\n",large);
 while(large>0)
 {
   loop++;
   large=large/10;
 }
 
for(m=0;m<loop;m++)
{
  for(i=0;i<10;i++) 
  {
   bucketcount[i]=0;
  }
  for(i=0;i<n;i++)
  {
   rem=(a[i]/divisor)%10;
   bucket[rem][bucketcount[rem]]=a[i];
   bucketcount[rem]++;
  }
  i=0;
  for(k=0;k<10;k++)
  {
    for(j=0;j<bucketcount[k];j++)
    {
      a[i]=bucket[k][j];
      i++;
    }
  
  }
  divisor=divisor*10;
}

}


int main()
{
  int a[20],n,i;
printf("enter the number of elements\n");
scanf("%d",&n);
printf("enter the elements in the array\n");
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
}
bucketsort(a,n);
printf("the sorted array is\n");
for(i=0;i<n;i++)
{
 printf("%d\t",a[i]);
}
}


/*
enter the number of elements
5
enter the elements in the array
123
321
345
234
123
the largest number is:345
the sorted array is
123	123	234	321	345	
*/
