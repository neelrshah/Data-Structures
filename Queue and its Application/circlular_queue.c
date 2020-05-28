
//circular queue using array



#include<stdio.h>
void enqueue(int x);
void dequeue();
void traverse();
int front=-1,rear=-1,ch;
int queue[5],size=5;
void main()

{

	do
	{
		
		printf("\nenter your choice\n");
		printf("\n1:enqueue\n2:dequeue\n3:traverse\n4:exit");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			{ 
				enqueue(queue[rear]);
				break;
			}
			case 2:		
			{
				dequeue();
				break;
			}		

			case 3:
			{
				traverse();
				break;
				
			}
			case 4:
				{
					break;
				}

		}

	}while(ch!=4);
}
void enqueue(int x)
{
	
	if(front==(rear+1)%size)
	printf("\n queue overflow");
	else
	{

		if(front%size==-1)
		{
			front=(front+1)%size;
			rear=(rear+1)%size;
		}
		else
		{
			rear=(rear+1)%size;
		}
		printf("enter a number to enqueue\n");
		scanf("%d",&queue[rear]);
		printf("%d is enqueued\n",queue[rear]);
	}		
} 


void dequeue()
{
	if(front%size==-1)
		printf("\n queue underflow");
	else
	{
		printf("%d is dequeued",queue[front]);
		front=(front+1)%size;

		if(front==(rear+1)%size)
		{
			front=-1;
			rear=-1;
		}

	}

}

void traverse()
{
	int i;
	if(front%size==-1)
		printf("\nqueue empty");
	else
	{
		for(i=front;i<=(i%size);i++)
		printf("%d\n",queue[i]);
	}
}

/*output=
enter your choice

1:enqueue
2:dequeue
3:traverse
4:exit1
enter a number to enqueue
10
10 is enqueued

enter your choice

1:enqueue
2:dequeue
3:traverse
4:exit1
enter a number to enqueue
20
20 is enqueued

enter your choice

1:enqueue
2:dequeue
3:traverse
4:exit1
enter a number to enqueue
30
30 is enqueued

enter your choice

1:enqueue
2:dequeue
3:traverse
4:exit1
enter a number to enqueue
40
40 is enqueued

enter your choice

1:enqueue
2:dequeue
3:traverse
4:exit1
enter a number to enqueue
50
50 is enqueued

enter your choice

1:enqueue
2:dequeue
3:traverse
4:exit1

 queue overflow
enter your choice

1:enqueue
2:dequeue
3:traverse
4:exit3
10
20
30
40
50

enter your choice

1:enqueue
2:dequeue
3:traverse
4:exit
*/

