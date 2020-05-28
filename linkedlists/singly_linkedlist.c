
//single linkedlist

#include<stdio.h>
#include<stdlib.h>
void createatstart();
void createatend();
void createatlocation();
void deleteatstart();
void deleteatend();
void deleteatlocation();
void traverse();
void search();
struct node
	{
	int data;
	struct node *next;
	};
	int ch;
	typedef struct node NODE;
	NODE *start=NULL,*p,*q;
	int i,loc;

void main()
{
do
{
printf("1.create at start\n2.create at end\n3.create at given location\n4.delete at start\n5.delete at end\n6.delete at given location\n7.traverse\n8.search\n9.exit\n");
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
		 search();
		 break;		
		case 9:
		 break;
		default:
		printf("\n invalid choice\n");			


	}

}while(ch!=9);
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
		printf("%d is created\n",p->data);
	}
	else
	{
		q=start;
	while(q->next!=NULL)
		q=q->next;
		q->next=p;
		p->next=NULL;
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
		printf("%d deleted\n",p->data);
		free(p);
	}
}

void deleteatlocation()
{
printf("enter the location");
	scanf("%d",&loc);	
	if(start==NULL)
		printf("linked list is empty");
	else
	{
	if(loc==1)
	{
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
		printf("%d delete\n",p->data);
		free(p);
	}
	else
		printf("invalid case");	
	}
	}
}


void search()
{
    int key,loc=1;
    if(start==NULL)
        printf("\n linkedlist is empty.\n");
    else
    {
        printf("\nenter the node to be searched\n");
        scanf("%d",&key);
        p=start;
        while(p!=NULL)
        {
            if(p->data==key)
            {
                printf("\nentered node is found at loc=%d in linkedlist\n",loc);
                break;
            }
            p=p->next;
            loc++;
        }
        if(p==NULL)
            printf("\nentered node is not found in the linkedlist\n"); 
    }    
}

/*
output=
1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.search
9.exit
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
8.search
9.exit
enter your choice
1
enter data
20
20 is created
1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.search
9.exit
enter your choice
2                   

 enter the data
30
30 is created
1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.search
9.exitenter your choice
3
enter the location=
3

 enter the data40
1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.search
9.exit
enter your choice
4
20 deleted
1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.search
9.exit
enter your choice
5
30 deleted
1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.search
9.exit
enter your choice
7
10
40
1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.search
9.exit
enter your choice
1
enter data
50
50 is created
1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.search
9.exit
enter your choice
8

enter the node to be searched
50

entered node is found at loc=1 in linkedlist
1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.search
9.exit
enter your choice
7
50
10
40
1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.search
9.exit
9
*/

