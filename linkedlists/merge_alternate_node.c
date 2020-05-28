
//merge alternate nodes of 2 linked list 

#include<stdio.h>
#include<stdlib.h>

void createatend(int);
void createatend1();
void createatend2();
void merge();
void traverse();

struct node
	{
	int data;
	struct node *next;
	};
	int ch,ch1,ch2;
	typedef struct node NODE;
	NODE *start1=NULL,*start2=NULL,*start3=NULL,*p,*q,*r,*tmp;

void main()
{
do
{
printf("1.create 1st linkedlist\n2.create 2nd linkedlist\n3.merge\n4.exit");
printf("enter your choice\n");
scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("\ncreate linkedlist1\n");
			do
			{
			printf("1.add element in linkedlist\n2.exit\nenter your choice\n");
			scanf("%d",&ch1);
				switch(ch1)
				{
				case 1:
				createatend1();
				break;
				case 2:
				printf("\nlinkedlist1 is created\n");
				break;
				}
				}while(ch1!=2);
			break;
		case 2:
			printf("\ncreate linkedlist2\n");
			do
			{
			printf("1.add element in linkedlist\n2.exit\n enter your choice\n");
			scanf("%d",&ch2);
				switch(ch2)
				{
				case 1:
				createatend2();
				break;
				case 2:
				printf("\nlinkedlist2 is created\n");
				break;
				}
				}while(ch2!=2);
			break;
		case 3:
			merge();
			traverse();
			break;
		case 4: 
			break;

	}
}while(ch!=4);
}

void createatend(int data)
{
	r=(NODE*)malloc(sizeof(NODE));
	r->data=data;
	if(start3==NULL)
	{
		r->next=NULL;
		start3=r;
	}
	else
	{
		tmp=start3;
		while(tmp->next!=NULL)
		tmp=tmp->next;
		tmp->next=r;
		r->next=NULL;
        }
}

void traverse()
{
	printf("merged linkedlist is:\n");
	if(start3==NULL)
		printf("linked list is empty");
	else
	{
	q=start3;
	while(q!=NULL)
	{
		printf("%d\n",q->data);
		q=q->next;
	}
	}

}


void createatend1()
{
p=(NODE*)malloc(sizeof(NODE));

		printf("\n enter the data\n");
		scanf("%d",&p->data);

	if(start1==NULL)
	{
		p->next=NULL;
		start1=p;
	}
	else
	{
		q=start1;
	while(q->next!=NULL)
		q=q->next;
		q->next=p;
		p->next=NULL;
        }
}

void createatend2()
{
p=(NODE*)malloc(sizeof(NODE));

		printf("\n enter the data\n");
		scanf("%d",&p->data);

	if(start2==NULL)
	{
		p->next=NULL;
		start2=p;
	}
	else
	{
		q=start2;
	while(q->next!=NULL)
		q=q->next;
		q->next=p;
		p->next=NULL;
        }
}

void merge()
{
	p=start1, q=start2;
	while(p!=NULL&&q!=NULL)
	{
	createatend(p->data);
	p=p->next;
	createatend(q->data);
	q=q->next;	
	}
	if(q==NULL)
	{
		while(p!=NULL)
		{
			createatend(p->data);
			p=p->next;
		}
	}
	else
	{
		while(q!=NULL)
		{
			createatend(q->data);
			q=q->next;
		}
	}
}

/*output:
1.create 1st linkedlist
2.create 2nd linkedlist
3.merge
4.exitenter your choice
1

create linkedlist1
1.add element in linkedlist
2.exit
enter your choice
1

 enter the data
10
1.add element in linkedlist
2.exit
enter your choice
1

 enter the data
20
1.add element in linkedlist
2.exit
enter your choice
1

 enter the data
30
1.add element in linkedlist
2.exit
enter your choice
2

linkedlist1 is created
1.create 1st linkedlist
2.create 2nd linkedlist
3.merge
4.exitenter your choice
2

create linkedlist2
1.add element in linkedlist
2.exit
 enter your choice
1

 enter the data
1
1.add element in linkedlist
2.exit
 enter your choice
1

 enter the data
2
1.add element in linkedlist
2.exit
 enter your choice
1

 enter the data
3
1.add element in linkedlist
2.exit
 enter your choice
2

linkedlist2 is created
1.create 1st linkedlist
2.create 2nd linkedlist
3.merge
4.exitenter your choice
3
merged linkedlist is:
10
1
20
2
30
3
1.create 1st linkedlist
2.create 2nd linkedlist
3.merge
4.exitenter your choice
4
*/
