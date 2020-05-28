
//searching first linked list is present in second linked list.

#include<stdio.h>
#include<stdlib.h>
void CreateatEnd1();
void Traverse1();
void CreateatEnd2();
void Traverse2();
void Search();
struct node1
	{
	int data1;
	struct node1 *next1;
	};
	typedef struct node1 NODE1;
	NODE1 *start1=NULL,*p1,*q1;

struct node2
	{
	int data2;
	struct node2 *next2;
	};
	int ch,c;
	typedef struct node2 NODE2;
	NODE2 *start2=NULL,*p2,*q2;
	int i,loc,count=0;


void main()
{	
	do
	{
		printf("Enter your choice\n");
		printf("1.Enter the First Linked list\n");
		printf("2.Enter the Second Linked list\n");
		printf("3.Search the Second L.L is Present in First L.L\n");
		printf("4.Exit\n");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
				{
					do
					{
						printf("Enter your choice\n");
						printf("1.Create at end\n2.Traverse\n3.Exit\n");
						scanf("%d",&ch);
						switch(ch)
							{
								case 1:
									CreateatEnd1(); 
									break;   
								case 2:
									Traverse1();
									break;					
								case 3:
									break;
								default:
									printf("Invalid Choice\n");
							}
					}while(ch!=3);
				}
				break;
			case 2:
				{
					do
					{
						printf("Enter your choice\n");
						printf("1.Create at end\n2.Traverse\n3.Exit\n");
						scanf("%d",&ch);
						switch(ch)
							{
								case 1:
									CreateatEnd2(); 
									break;   
								case 2:
									Traverse2();
									break;					
								case 3:
									break;
								default:
									printf("Invalid Choice\n");
							}
					}while(ch!=3);
				}
				break;
			case 3:
					Search();
				break;
			case 4:
				break;
			default:
				printf("Invalid choice\n");
		}
	}while(c!=4);
}





void CreateatEnd1()
{
	p1=(NODE1*)malloc(sizeof(NODE1));
	printf("Enter the data\n");
	scanf("%d",&p1->data1);
	printf("%d is added in Linked list\n",p1->data1);
	if(start1==NULL)
	{
		p1->next1=NULL;
		start1=p1;
	}
	else
	{
		q1=start1;
		while(q1->next1!=NULL)
			q1=q1->next1;
		q1->next1=p1;
		p1->next1=NULL;
        }
}


void Traverse1()
{
	if(start1==NULL)
		printf("Linked list is empty\n");
	else
	{
		q1=start1;
		while(q1!=NULL)
		{
			printf("%d\n",q1->data1);
			q1=q1->next1;
		}
	}

}

void CreateatEnd2()
{
	p2=(NODE2*)malloc(sizeof(NODE2));
	printf("Enter the data\n");
	scanf("%d",&p2->data2);
	printf("%d is added in Linked list\n",p2->data2);
	if(start2==NULL)
	{
		p2->next2=NULL;
		start2=p2;
	}
	else
	{
		q2=start2;
		while(q2->next2!=NULL)
			q2=q2->next2;
		q2->next2=p2;
		p2->next2=NULL;
        }
}


void Traverse2()
{
	if(start2==NULL)
		printf("Linked list is empty\n");
	else
	{
		q2=start2;
		while(q2!=NULL)
		{
			printf("%d\n",q2->data2);
			q2=q2->next2;
		}
	}

}


void Search()
{
	p1==start1;
	p2==start2;
	printf("Searching in process\n");
	if(p1==NULL||p2==NULL)
		printf("Linked List Don't have Data to Search\n");
	else
	{
		while(p1!=NULL)
		{
			p2=start2;
			count=0;
			while(p2!=NULL)
			{
				if(p1->data1==p2->data2)
				{
					count++;
					break;
				}
				p2=p2->next2;
			}
			if(count==0)
				{
					break;
				}
			p1=p1->next1;
		}
		if(count==0)
			printf("first L.L is not present in second Linked List\n");
		else
		        printf("first L.L is present in second L.L\n");
	}
}

/*
Output:Enter your choice
1.Enter the First Linked list
2.Enter the Second Linked list
3.Search the Second L.L is Present in First L.L
4.Exit
1
Enter your choice
1.Create at end
2.Traverse
3.Exit
1
Enter the data
40
40 is added in Linked list
Enter your choice
1.Create at end
2.Traverse
3.Exit
1
Enter the data
50
50 is added in Linked list
Enter your choice
1.Create at end
2.Traverse
3.Exit
1
Enter the data
60
60 is added in Linked list
Enter your choice
1.Create at end
2.Traverse
3.Exit
2
40
50
60
Enter your choice
1.Create at end
2.Traverse
3.Exit
3
Enter your choice
1.Enter the First Linked list
2.Enter the Second Linked list
3.Search the Second L.L is Present in First L.L
4.Exit
2
Enter your choice
1.Create at end
2.Traverse
3.Exit
1
Enter the data
20
20 is added in Linked list
Enter your choice
1.Create at end
2.Traverse
3.Exit
1
Enter the data
30
30 is added in Linked list
Enter your choice
1.Create at end
2.Traverse
3.Exit
1
Enter the data
40
40 is added in Linked list
Enter your choice
1.Create at end
2.Traverse
3.Exit
1
Enter the data
50
50 is added in Linked list
Enter your choice
1.Create at end
2.Traverse
3.Exit
1
Enter the data
60
60 is added in Linked list
Enter your choice
1.Create at end
2.Traverse
3.Exit
1
Enter the data
70
70 is added in Linked list
Enter your choice
1.Create at end
2.Traverse
3.Exit
1
Enter the data
80
80 is added in Linked list
Enter your choice
1.Create at end
2.Traverse
3.Exit
1
Enter the data
90
90 is added in Linked list
Enter your choice
1.Create at end
2.Traverse
3.Exit
2
20
30
40
50
60
70
80
90
Enter your choice
1.Create at end
2.Traverse
3.Exit
3
Enter your choice
1.Enter the First Linked list
2.Enter the Second Linked list
3.Search the Second L.L is Present in First L.L
4.Exit
3
Searching in process
first L.L is present in second L.L
Enter your choice
1.Enter the First Linked list
2.Enter the Second Linked list
3.Search the Second L.L is Present in First L.L
4.Exit


*/


