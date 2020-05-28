
//Linear search

#include<stdio.h>
void main()
{
        int flag=0,a[8],key;
        int i,loc=1;
                printf("Enter the elements\n");
        for(i=0;i<8;i++)
                scanf("%d",&a[i]);
                printf("Enter the elements to search\n");
                scanf("%d",&key);
        for(i=0;i<8;i++)
        {
                if(a[i]==key)
                {
                        flag=1;
                        printf("Element is present at location %d\n",loc);
                        break;
                }
                loc++;
        }
        if(flag==1)
                printf("Search is successful\n");
        else
                printf("element is not present\nSearch is unsuccesful\n");
}


/*output:
Enter the elements
10  
20
30
45
36
47
57
5
Enter the elements to search
36
Element is present at location 5
Search is successful
*/
