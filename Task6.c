#include<stdio.h>
#include<conio.h>
void main()
{
	int f,a,n;
	clrscr();
	f=1;
	a=1;
	printf("Enter the value of N:-");
	scanf("%d",&n);
	do{
		f=n*f;
		n--;
	  }while(a<=n);
	printf("Factorial of 1 to N=%d\n",f);
	getch();
}
