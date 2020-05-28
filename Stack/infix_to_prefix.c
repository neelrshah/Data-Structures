
#include<stdio.h>
int pop();
void push(char);
int priority(char);
int top=-1;
char stack[20];
char x;
int  main()
{ 
	char exp1[20],exp2[20],exp3[20];
        char *e;
	int i,n,m;
        printf("Enter the expression :-\n ");
        scanf("%s",exp1);
	for(n=0;exp1[n]!='\0';n++)
	{
	m=n;
	}
	e=exp1;
	exp2[n]='\0';
		for(i=0 ;i!=n;i++)
		{
		if(*e=='(')
			{
			*e=')';
			}
		else if (*e==')')
			{
			*e='(';
			}	
		exp2[m-i]=*e;
		e++;	
		}
	printf("reverse=%s\n",exp2);
        e = exp2;
	i=0;
      while(*e != '\0')
        {
                if(isalnum(*e))
		{
                	exp3[i]=*e;
			i++;
		}
                else if(*e == '(')
		{
			push(*e);
		}
                 else if(*e == ')')
		{
			while((x = pop()) != '(')
			{
			exp3[i]=stack[top];
			top--;
			i++;
			}
		}
        	else
        	{
			while(priority(stack[top]) > priority(*e))
			{
				pop();
				exp3[i]=stack[top];
				top--;
				i++;
			}
				push(*e);
        }
e++;
}
                while(top != -1)
               {
		 
		pop();
		if(stack[top]!='(')
		{
                exp3[i]=stack[top];
		i++;
		}
		top--;
               }
exp3[i]='\0';
printf("result=%s\n",exp3);
for(n=0;exp3[n]!='\0';n++)
	{
	m=n;
	}
	e=exp3;
	exp2[n]='\0';
		for(i=0 ;i!=n;i++)
		{	
		exp2[m-i]=*e;
		e++;	
		}
printf("Prefix=%s\n",exp2);   
	
}
 
	void push(char x)
	{
		top++;
		stack[top]=x; 
	}
   
	int pop()
	{
		if(top == -1)
		return -1;
		else
		{
		return stack[top];
		}
	}
      
	int priority(char x)
	{
		if(x == '(')
	        return 0;
		if(x == '+' || x == '-')
	        return 1;
		if(x == '*' || x == '/')      
	        return 2;
	}
      
      /*output:
      Enter the expression :-
 (a+b)*c
reverse=c*(b+a)
result=cba+*
Prefix=*+abc

*/
