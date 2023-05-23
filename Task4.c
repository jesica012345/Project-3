#include<stdio.h>
#include<conio.h>
void main()
{
	int n,fd,ld,sum;
	clrscr();
	printf("Enter the Number:-");
	scanf("%d",&n);
	ld=n%10;
	while(n>10)
	{
		n=n/10;
	}
	fd=n;
	sum=fd+ld;
	printf("sum of First and Last digit of Given numer =%d",sum);
	getch();
}
