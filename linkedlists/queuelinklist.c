
//Queue using linked list.

#include<stdio.h>
#include<stdlib.h>
void enqueue();
void dequeue();
void traverse();
struct queue
{
        int data;
        struct queue *next;
};
typedef struct queue QUEUE;
QUEUE *front=NULL,*rear=NULL,*p,*q;
void main()
{
        int ch;
        do
        {
                printf("Enter the choice\n");
                printf("1.Enqueue\n2.Dequeue\n3.traverse\n4.exit\n");
                scanf("%d",&ch);
                switch(ch)
                {
                        case 1:
                        {
                                enqueue();
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
                        	break;
                        default:
                        printf("invalid Input\n");
                }
        }while(ch!=4);
}


void enqueue()
{
        p=(QUEUE*)malloc(sizeof(QUEUE));
        printf("Enter the data\n");
        scanf("%d",&p->data);
        if(front==NULL)
        {
                p->next=NULL;
                front=p;
                rear=p;
        }
        else
        {
                q=rear;
                q->next=p;
                p->next=NULL;
                rear=p;
        }
}

void dequeue()
{
        if(front==NULL)
        printf("\n Queue underflow");
        else if(front->next==NULL)
        {
                p=front;
                front=NULL;
                rear=NULL;
                printf("%d is dequeue\n",p->data);
                free(p);
        }
        else
        {
                p=front;
                front=front->next;
                printf("%d is dequeue\n",p->data);
                free(p);
        }
}

void traverse()
{
        if(front==NULL)
        printf("\n Queue is empty");
        else
        p=front;
        while(p!=NULL)
        {
                printf("%d\n",p->data);
                p=p->next;
        }
}

/*output:
Enter the choice
1.Enqueue
2.Dequeue
3.traverse
4.exit
1
Enter the data
10
Enter the choice
1.Enqueue
2.Dequeue
3.traverse
4.exit
1
Enter the data
20
Enter the choice
1.Enqueue
2.Dequeue
3.traverse
4.exit
1
Enter the data
30
Enter the choice
1.Enqueue
2.Dequeue
3.traverse
4.exit
1
Enter the data
40
Enter the choice
1.Enqueue
2.Dequeue
3.traverse
4.exit
2
10 is dequeue
Enter the choice
1.Enqueue
2.Dequeue
3.traverse
4.exit
3
20
30
40
Enter the choice
1.Enqueue
2.Dequeue
3.traverse
4.exit
4
*/
