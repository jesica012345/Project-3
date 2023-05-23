#include<stdio.h>
#include<conio.h>
void main()
{
	int c,a=0;
	clrscr();
	printf("Enter the value of I:-");
	scanf("%d",&c);
	do{
		c/=10;
		a++;
	  }while(c>0);
	printf("Number has %d digits\n",a);
	getch();
}
