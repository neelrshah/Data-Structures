
//CIRCULAR LINKEDLIST

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
typedef struct node NODE;
NODE *start=NULL,*end=NULL,*p,*q;
int loc,i;
void main()
{
    int ch;
    do
    {
        printf("\n1.create at start\n2.create at end\n3.create at given location\n4.delete at start\n5.delete at end\n6.delete at given location\n7.traverse\n8.exit\n");
        printf("ENTER YOUR CHOICE\n");
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
            printf("\n invalid choice");
               
        }
    }while(ch!=8);

}

///////////////////////////////////////////////////////////////////////////////
void createatstart()
{
    p=(NODE *)malloc(sizeof(NODE));
    printf("\nenter data\n");
    scanf("%d",&p->data);
    if(start==NULL)
    {
        p->next=p;
        start=p;
        end=p;
        
    }
    else
    {
        p->next=start;
        start=p;
        end->next=p;
    }
}

void createatend()
{
p=(NODE*)malloc(sizeof(NODE));

		printf("\n enter the data\n");
		scanf("%d",&p->data);

	if(start==NULL)
	{
		p->next=p;
		start=p;
		end=p;
		printf("%d is created\n",p->data);
	}
	else
	{
		q=end;
		q->next=p;
		p->next=start;
		end=p;
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
		p->next=p;
		start=p;
		end=p;
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
		end->next=p;
		printf("%d is created\n",p->data);
	}
	
      	else
	{
		i=1;
		q=start;
	while(i<loc-1&&q!=end)
	{
		q=q->next;
		i=i+1;
	}
	if(q!=end)
	{
		p->next=q->next;
		q->next=p;
		end=q;
	}
	else
	{
	    q->next=p;
	    p->next=start;
	    end=p;
	}
	}
}
}
void deleteatstart()
{
    if(start==NULL)
		printf("linked list is empty\n");
	else
	{
	    if(start->next==start)
	    {
		p=start;
		start=NULL;
		end=NULL;
		printf("%d deleted\n",p->data);
		free(p);
		}
	    else
	    {
	        p=start;
	        start=start->next;
	        end->next=start;
	        free(p);
	    }	
	}
}
void deleteatend()
{
    if(start==NULL)
	{
		printf("linked list is empty,delete can't be perform ");
	}	
	else
	if(start->next==start)
	{
		p=start;
		start=NULL;
		end=NULL;
		printf("%d  deleted\n",p->data);
		free(p);
	}
	else
	{
		p=start;
	while(p->next!=start)
	{
		q=p;
		p=p->next;
	}
		q->next=start;
		end=q;
		printf("%d deleted\n",p->data);
		free(p);
	}
}
void deleteatlocation()
{
        printf("Enter the location: ");
	scanf("%d",&loc);	
	if(start==NULL)
	printf("Linked list is empty");
	else
	{
	        if(loc==1)
	        {
		        p=start;
		        start=p->next;
		        end->next=start;
		        printf("%d Deleted\n",p->data);		
		        free(p);
	        }
	        else if(p!=NULL)
	        {
		        i=1;
		        p=start;
	                while(i<loc&&p!=NULL)
	                {
		                q=p;
		                p=p->next;
		                i=i+1;
	                }
	                if(p==end)
	                {
		                q->next=start;
		                end=q;
		                printf("%d Deleted\n",p->data);
		                free(p);
	                }
                        else
                        {
                                q->next=p->next;
                                 printf("%d Deleted\n",p->data);
		                free(p);
                        }
                                
	         }
	                else
		        printf("Invalid case");	
	    }
}

void traverse()
{
    if(start==NULL)
		printf("linked list is empty");
	else
	{
	q=start;
	while(q->next!=start)
	{
		printf("%d\n",q->data);
		q=q->next;
	}
	printf("%d\n",q->data);
	}
}


/*output:
1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.exit
ENTER YOUR CHOICE
1

enter data
10

1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.exit
ENTER YOUR CHOICE
1

enter data
20

1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.exit
ENTER YOUR CHOICE
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
8.exit
ENTER YOUR CHOICE
3
enter the location=
4

 enter the data50

1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.exit
ENTER YOUR CHOICE
7
20
10
30
50

1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.exit
ENTER YOUR CHOICE
4

1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.exit
ENTER YOUR CHOICE
5
50 deleted

1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.exit
ENTER YOUR CHOICE
6
enter the location1
10 deleted

1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.exit
ENTER YOUR CHOICE
7
30

1.create at start
2.create at end
3.create at given location
4.delete at start
5.delete at end
6.delete at given location
7.traverse
8.exit
ENTER YOUR CHOICE
8
*/
