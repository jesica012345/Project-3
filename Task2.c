#include<stdio.h>
#include<conio.h>
void main()
{
	int c=1,d;
	clrscr();
	printf("Enter the value of N:-");
	scanf("%d",&d);
	while(c<=10)
	{
		printf("%d*%d=%i\n",c,d,c*d);
		c++;
	}
	getch();

}
