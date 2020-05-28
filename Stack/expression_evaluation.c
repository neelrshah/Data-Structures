/*
Q.4.Program to evaluate given postfix into answer.
*/

#include<stdio.h>
int stack1[20];
int top1=-1;
int x;

void push1(int x)
{                      
    stack1[++top1]=x;
}
 
int pop1()
{                     
    return(stack1[top1--]);
}



 void main()
{ 
        char exp[50];
        char *e;
	int a,b,r,ch;
        printf("Enter the expression :: ");
        scanf("%s",exp);
        e = exp;
        while(*e != '\0')
        {
	if(isdigit(*e))
		{
			r=*e-48;
			printf("%d\n",r);
			push1(r);
		}
	//e++;
	//e=exp;
	//while(*e!='\0')
		else
		{
			//a=stack1[top1];
			
			a=pop1();
			printf("%d\n",a);
			//b=stack1[top1];
			b=pop1();
			printf("%d",b);
			if(*e=='+')
				ch=1;
			else if(*e=='-')
				ch=2;
			else if(*e=='*')
				ch=3;
			else if(*e=='/')
				ch=4;
			switch(ch)
				{
					case 1:
						r=a+b;
						break;
					case 2:
						r=a-b;
						break;
					case 3:
						r=a*b;
						break;
					case 4:
						r=a/b;
						break;
				}
			push1(r);
		}
		e++;
	}
	printf("Answer=%d\n",stack1[top1]);
}          

/*output:
Enter the expression :: 34+
3
4
4
3Answer=7

*/
