#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,c=0;
	clrscr();
	printf("Enter any number you want to check:-");
	scanf("%d",&n);
	if(n==0 && n==1)
	{
		printf("%d is not prime number.",n);
	}
	else
	{
		for(i=2;i<=n/2;i++)
		{
			if(n%i==0)
			{
				c=1;
			}
		}
		if(c==0)
		{
			printf("%d is is a prime number.",n);
		}
		else
		{
			printf("%d is not a prime number.",n);
		}
	}
	getch();
}
