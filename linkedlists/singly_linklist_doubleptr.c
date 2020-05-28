
//single linkedlist with 2 external referance pointer.

#include<stdio.h>
#include<stdlib.h>
void createatstart();
void createatend();
void createatlocation();
void deleteatstart();
void deleteatend();
void deleteatlocation();
void traverse();
struct node
	{
	int data;
	struct node *next;
	};
	int ch;
	typedef struct node NODE;
	NODE *start=NULL,*last=NULL,*p,*q;
	int i,loc;

void main()
{
do
{
printf("1.create at start\n2.create at end\n3.create at given location\n4.delete at start\n5.delete at end\n6.delete at given location\n7.traverse\n8.exit\n");
printf("enter your choice\n");
scanf("%d",&ch);
switch(ch)
        {
	     case 1:
		createatstart();
		break;
		case 2:	  
		createatend(); 
		break;   
		case 3:
		createatlocation();
		 break;
		case 4:
		deleteatstart();
		 break;
		case 5:
		deleteatend();
		 break;
		case 6:
		deleteatlocation();
		 break;
		case 7:
		 traverse();
		 break;
		case 8:
		 break;
		default:
		printf("\n invalid choice\n");			


	}

}while(ch!=8);
}




void createatstart()
{
 	p=(NODE*)malloc(sizeof(NODE));
	printf("enter data\n");
	scanf("%d",&p->data);
	if(start==NULL)
	{
	   p->next=NULL;
	   start=p;
	   last=p;
	   printf("%d is created\n",p->data);
	}
	else
        {
		p->next=start;
		start=p; 
		printf("%d is created\n",p->data);
	}
}
void traverse()
{
	if(start==NULL)
		printf("linked list is empty");
	else
	{
	q=start;
	while(q!=NULL)
	{
		printf("%d\n",q->data);
		q=q->next;
	}
	}

}
void createatend()
{
p=(NODE*)malloc(sizeof(NODE));

		printf("\n enter the data\n");
		scanf("%d",&p->data);

	if(start==NULL)
	{
		p->next=NULL;
		start=p;
		last=p;
		printf("%d is created\n",p->data);
	}
	else
	{
		q=last;
		q->next=p;
		p->next=NULL;
		last=p;
		printf("%d is created\n",p->data);
        }
}

void createatlocation()
{
p=(NODE*)malloc(sizeof(NODE));
		printf("enter the location=\n");
		scanf("%d",&loc);
		printf("\n enter the data");
		scanf("%d",&p->data);

	if(start==NULL)
	{
	if(loc==1)
	{
		p->next=NULL;
		start=p;
		last=p;
		printf("%d is created\n",p->data);
	}
	else
		printf("\ninvalid location");
	}

	else
	{
	if(loc==1)
	{
		p->next=start;
		start=p;
		printf("%d is created\n",p->data);
	}
	
      	else
	{
		i=1;
		q=start;
	while(i<loc-1&&q!=NULL)
	{
		q=q->next;
		i=i+1;
	}
	if(q!=NULL)
	{
		p->next=q->next;
		q->next=p;
	
		if(q->next==NULL)
		last=p;
	}
	else
		printf("\n location is invalid");
	}
	}
}

void deleteatstart()
{
	if(start==NULL)
		printf("linked list is empty\n");
	else if(start->next==NULL)
	{
	    p=start;
	    start=NULL;
	    last=NULL;
	    printf("\n%d is deleted",p->data);
	    free(p);
	}
	else
	{
		p=start;
		start=p->next;
		printf("%d deleted\n",p->data);
		free(p);
	}

}

void deleteatend()
{
if(start==NULL)
	{
		printf("linked list is empty,delete can't be perform ");
	}	
	else
	if(start->next==NULL)
	{
		p=start;
		start=NULL;
		last=NULL;
		printf("%d  deleted\n",p->data);
		free(p);
	}
	else
	{
		p=start;
	while(p->next!=NULL)
	{
		q=p;
		p=p->next;
	}
		q->next=NULL;
		last=q;
		printf("%d deleted\n",p->data);
		free(p);
	}
}

void deleteatlocation()
{
printf("enter the location");
	scanf("%d",&loc);	
	if(start==NULL)
		printf("\nlinked list is empty");
	else
	{
	if(loc==1)
	{
	if(start->next==NULL)
	last=NULL;
		p=start;
		start=p->next;
		printf("%d deleted\n",p->data);		
		free(p);
	}
	else
	{
		i=1;
		p=start;
	while(i<loc && p!=NULL)
	{
		q=p;
		p=p->next;
		i=i+1;
	}
	if(p!=NULL)
	{
		q->next=p->next;
	if(p->next=NULL)
	    last=q;
		printf("%d delete\n",p->data);
		free(p);
	
	}
	}
	}
}	
 

/*output
1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.exit
enter your choice
1
enter data
10
10 is created
1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.exit
enter your choice
2

 enter the data
20
20 is created
1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.exit
enter your choice
3
enter the location=
2

 enter the data30
1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.exit
enter your choice
7
10
30
20
1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.exit
enter your choice
4
10 deleted
1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.exit
enter your choice
5
20 deleted
1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.exit
enter your choice
6
enter the location1
30 deleted
1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.exit
enter your choice
1
enter data
40
40 is created
1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.exit
enter your choice
7
40
1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.exit
enter your choice
8
1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.exit
enter your choice
8
1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.exit
*/
