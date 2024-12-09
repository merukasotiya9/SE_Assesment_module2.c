#include<stdio.h>

int add(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);

main()
{

	int x, y, z, choice;
	char ch;
	printf("\n\n\t Enter Number1 : ");
	scanf("%d",&x);
	printf("\n\n\t Enter Number2 : ");
	scanf("%d",&y);
	
	printf("\n\n\t ----------Arithmetics-----------");
	printf("\n\n\t ---------------------------------");
	printf("\n\n\t Press 1 for Addition ");
	printf("\n\n\t Press 2 for Subtraction ");
	printf("\n\n\t Press 3 for Multiplication ");
	printf("\n\n\t Press 4 for Division ");
	printf("\n\n\t ---------------------------------");
	
	printf("\n\n\n\t Which operation you want to perform : ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1 : z=add(x, y);
				 printf("\n\n\t Addition : %d", z);
			     break;
		
		case 2 : z=sub(x, y);
				 printf("\n\n\t Subtraction : %d", z);
			     break;
			     
		case 3 : z=mul(x, y);
				 printf("\n\n\t Multiplication : %d", z);
			     break;
			     
		case 4 : z=div(x, y);
				 printf("\n\n\t Division : %d", z);
			     break;
	}
}



int add(int a, int b)
{
	return a+b;
}



int sub(int x, int y)
{
	return x-y;
}

int mul(int p, int q)
{
	return p*q;
}

int div(int x, int y)
{
	return x/y;
}

	