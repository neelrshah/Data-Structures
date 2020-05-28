
//INSERTATION SORT

#include<stdio.h>
void main()
{
    int i,j,tmp;
    int a[6];
    printf("\n enter the elements to sort:\n");
    for(i=0;i<6;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<6;i++)
    {
        tmp=a[i];
        j=i-1;
        while(tmp<a[j]&&j!=-1)
        {
            a[j+1]=a[j];
            j--;
            a[j+1]=tmp;
        }
        //a[j+1]=tmp;
    } 
     printf("\nNUMBERS AFTER SORTING ARE:\n");
     for(i=0;i<6;i++)
     {
        printf("%d\n",a[i]);
     }      
}



/*output:
NUMBERS AFTER SORTING ARE:
5
46
47
57
368
436
*/
