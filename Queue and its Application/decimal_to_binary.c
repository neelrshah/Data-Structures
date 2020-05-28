/*
Q.3-Print the Converted series from decimal to binary using queue.
*/

#include<stdio.h>
void enqueue(int );
void traverse();
	int n=1,a[10],i,bit,m,p=1;
	int front=-1;
	int rear=-1;
	void main()
	{
		printf("Enter the number\n");
		scanf("%d",&m);
		while(m>=p)
		{
			while(n>1)
			{
				if(n%2==1)
				{
					bit=1;
					enqueue(bit);
				}
				else if(n%2==0)
				{
					bit=0;
					enqueue(bit);
				}
			n=n/2;
			}
			bit=1;
			enqueue(bit);
			traverse();
			printf("\n");	
			p++;
			n=p;
			front=-1;
			rear=-1;
		}
	}

    
	void enqueue(int x)
	{
		if(front==-1)
			front++;
		a[++rear]=x;
	}

	void traverse()
	{
			for(i=rear;i>-1;i--)
				printf("%d",a[i]);
	}

/*
Enter the number
10
1
10
11
100
101
110
111
1000
1001
1010
*/
