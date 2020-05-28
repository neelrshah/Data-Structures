


#include<stdio.h>
void towers(int,char,char,char);
int main()
{
	int num;
	printf("enter the number of disk\n");
	scanf("%d",&num);
	printf("the sequence of moves are\n");
	towers(num,'A','B','C');
	return 0;
}
void towers(int num,char source,char destination,char aux)
{ 
	if(num==1)
	{
		printf("\nmove disk 1 from %c to %c\n",source,destination);
		return;
	}
	towers(num-1,source,aux,destination);
	printf("\nmove disk %d from %c to %c\n",num,source,destination);
	towers(num-1,aux,destination,source);
}

/*output=
enter the number of disk
3
the sequence of moves are
move disk 1 from A to B
move disk 2 from A to Cmove disk 1 from B to C
move disk 3 from A to Bmove disk 1 from C to A
move disk 2 from C to Bmove disk 1 from A to B
