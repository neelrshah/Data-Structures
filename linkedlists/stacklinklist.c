
//Stack using linked list.

#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void traverse();
struct stack
{
        int data;
        struct stack *next;
};
typedef struct stack STACK;
STACK *top=NULL,*p,*q;
void main()
{
        int ch;
        do
        {
                printf("Enter the choice\n");
                printf("1.push\n2.pop\n3.traverse\n4.exit\n");
                scanf("%d",&ch);
                switch(ch)
                {
                        case 1:
                        
                                push();
                                break;
                        
                        case 2:
                        
                                pop();
                                break;
                        
                        case 3:
                         
                                traverse();
                                break;
                        
                        case 4:
                        	break;
                        default:
                        printf("Wrong Input\n");
                }
        }
        while(ch!=4);
}
void push()
{
        p=(STACK*)malloc(sizeof(STACK));
        printf("Enter the data\n");
        scanf("%d",&p->data);
        if(pop==NULL)
        {
                p->next=NULL;
                top=p;
                printf("\n%d is pushed",p->data);
        }
        else
        {
                p->next=top;
                top=p;
                printf("\n%d is pushed",p->data);
        }
}

void pop()
{
        if(top==NULL)
        printf("\n Stack underflow");
        else
        {
                p=top;
                top=top->next;
                printf("%d is popped\n",p->data);
                free(p);
        }
}

void traverse()
{
        if(top==NULL)
        printf("\n Stack is empty");
        else
        p=top;
        while(p!=NULL)
        {
                printf("%d\n",p->data);
                p=p->next;
        }
}

/*output:
Enter the choice
1.push
2.pop
3.traverse
4.exit
1
Enter the data
10

10 is pushedEnter the choice
1.push
2.pop
3.traverse
4.exit
1
Enter the data
20

20 is pushedEnter the choice
1.push
2.pop
3.traverse
4.exit
1
Enter the data
30

30 is pushedEnter the choice
1.push
2.pop
3.traverse
4.exit
1
Enter the data
40

40 is pushedEnter the choice
1.push
2.pop
3.traverse
4.exit
2
40 is popped
Enter the choice
1.push
2.pop
3.traverse
4.exit
3
30
20
10
Enter the choice
1.push
2.pop
3.traverse
4.exit
4
*/

