#include<stdio.h>
#include<conio.h>
void main()
{
	int n,r=0,R,c;
	clrscr();
	printf("Enter the any Number:-");
	scanf("%d",&n);
	c=n;
	while(n>0)
	{
		R=n%10;
		r=(r*10)+R;
		n/=10;
	}
	printf("your reverse numer is=%d",r);
	if(c==r)
	{
		printf("\nThis Number is palindrome.",c);
	}
	else
	{
		printf("\nThis Number not is  palindrome.",c);
	}
	getch();
}
