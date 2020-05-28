
//binary search

#include<stdio.h>
void main()
{
        int low=0,high=7,mid,flag=0;
        int i,key,a[8];
        printf("Enter the elements\n");
                for(i=0;i<8;i++)
        scanf("%d",&a[i]);
        printf("Enter the elements to search\n");
        scanf("%d",&key);
             while(low<=high)
             {
                mid=(low+high)/2;
                if(key==a[mid])
                {
                        flag=1;
                        break;
                }
                else if(key<a[mid])
                high=mid-1;
                else
                low=mid+1;
             }
                if(flag==1)
                {
                    printf("Search is successful\n");
                    printf("element is present at %d location\n",mid+1);
                }
                else
                printf("Search is unsuccesful\n");
}

/*output:
Enter the elements
10
20
30
40
50
60
70
80
Enter the elements to search
50
Search is successful
element is present at 5 location
*/

