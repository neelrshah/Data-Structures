
//infix to postfix

#include<stdio.h>
int priority(char x);
void push(char a);
int pop();
char stack[100];
int top=-1;
main()
{
    char *e,a;
    char exp[100];
    printf("Enter the expression\n");
    scanf("%s",exp);
    e=exp;
    while(*e!='\0')
    {
	    if(isalnum(*e))
	    {
	    printf("%c",*e);
	    }
	    else if(*e=='(')
	    {
	    push(*e);
	    }
	    else if(*e==')')
	    {
	    pop();
	    }
	    else
	    {
	    while(priority(stack[top])>=priority(*e))
		{
		printf("%c",pop());
		}
		push(*e);
	}
    e++;
}
while(top!=-1)
	{
	printf("%c",stack[top]);
	top--;
	}
printf("\n");			
}
int priority(char x)
{
if(x=='('||x==')')
	{
	return 0;
	}
else if(x=='+'||x=='-')
	{
	return 1;
	}
else if(x=='*'||x=='-')
	{
	return 2;
	}
else if(x=='^')
	{
	return 3;
	}
}
void push(char a)
{
	top++;
	stack[top]=a;
}
int pop()
{

	{
	printf("%c",stack[top]);
	top--;
	}
}










