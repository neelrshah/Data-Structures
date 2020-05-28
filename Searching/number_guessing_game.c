
//GAME OF GUESSING NUMBER

#include<stdio.h>
int random(int);
int game();
int num,x,ch,flag=0;
int main()
{
	game();
	return 0;
}

int random(int b)
{
	b=(b*6)*5-b+32;
	b=b%100;
	return b;
}
int game()
{
do
	{
		printf("Enter your choice\n");
		printf("1.Play The Guessing Game\n");
		printf("2.EXIT\n");
		scanf("%d",&ch);
		flag=0;
		switch(ch)
		{
			case 1:
				
				do
				{
					printf("Guess the number in Between 1 to 100\n");
					do
					{
						scanf("%d",&num);
						if(num<=100)
							break;
						else
							printf("Please enter Number Between 1 to 100\n");
				
					}while(num>100);
					if(flag==0)
						x=random(num);
					if(num>x)
						printf("Guessed number is Greater\n");
					else if(num<x)
						printf("Guessed number is Smaller\n");
					else
					{
						printf("Guess successful\n");
						break;
					}
					flag=1;
				}while(num!=x);
				break;
			
			case 2:
				break;
			
			default:
				printf("Invalid choice\n");
		}
	}while(ch!=2);
}
/*output:
Enter your choice
1.Play The Guessing Game
2.EXIT
1
Guess the number in Between 1 to 100
90
Guessed number is Greater
Guess the number in Between 1 to 100
50
Guessed number is Greater
Guess the number in Between 1 to 100
30
Guessed number is Smaller
Guess the number in Between 1 to 100
40
Guessed number is Smaller
Guess the number in Between 1 to 100
45
Guessed number is Greater
Guess the number in Between 1 to 100
42
Guess successful
*/
