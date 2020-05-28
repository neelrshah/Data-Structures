/*
NAME:NEEL SHAH
ROLL:220
HASHING
*/
#include<stdio.h>

int main()
{
	static int a[10],key,ch,find,i=0,j=0;
	
	do
	{
		printf("1.Enter the  key values\n");
		printf("2.Search the element\n");
		printf("3.EXIT\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				for(i=0;i<5;i++)
				{
					scanf("%d",&key);
					j=(key%10)-1;
					if(a[j]==0)
						a[j]=key;
					else
						a[j+1]=key;
				}
				break;
			case 2:
				printf("Enter the element to be Searched\n");
				scanf("%d",&find);
				i=(find%10)-1;
				if(a[i]==find)
					printf("Element is present\n");
				else if(a[i+1]==find)
					printf("Element is present\n");
				else
					printf("Element is absent\n");
				break;
			case 3:
				break;
			default:
				printf("Invalid choice\n");
		}
	}while(ch!=3);
	
	return 0;
}

/*
Output:
1.Enter the  key values
2.Search the element
3.EXIT
1
10
23
24
34
23
1.Enter the  key values
2.Search the element
3.EXIT
2
Enter the element to be Searched
10
Element is present
1.Enter the  key values
2.Search the element
3.EXIT
2
Enter the element to be Searched
11
Element is absent
1.Enter the  key values
2.Search the element
3.EXIT
3

*/
