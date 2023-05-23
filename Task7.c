#include<stdio.h>
#include<conio.h>
void main()
{
	int x=0,y=1,n,r,z;
	clrscr();
	printf("please enter any number:-");
	scanf("%d",&n);
	for(r=1;r<=n;r++)
	{
		printf("%d\t",x);
		z=x+y;
		x=y;
		y=z;
	}

	getch();
}
