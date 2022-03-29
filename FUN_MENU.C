/* write a menu driven program to using function
author:panchal jay
date:24/03/2022*/
#include<stdio.h>
#include<conio.h>
int menu();
void sum();
void palindrom(int);
int armstrong();
int squre(int);
void main()
{
	int a,b,c;
	char yn;
	clrscr();
	do
	{
		c=menu();
		switch(c)
		{
			case 1:
				sum();
				break;
			case 2:
				printf("enter value for checkig palindrom or not.:");
				scanf("%d",&c);
				palindrom(c);
				break;
			case 3:
				c=armstrong();
				if(c==1)
					printf("armstrong number.");
				else
					printf("number is not armstrong.");
				break;
			case 4:
				printf("enter any number to print squre serise:");
				scanf("%d",&a);
				c=squre(a);
				break;
			case 5:
				exit(0);
			default:
				printf("invalid choise");
		}
		printf("\nyou want to continue?if yes(y/Y) else no(N/n):");
		flushall();
		scanf("%c",&yn);
	}while(yn=='y'||yn=='Y');
	getch();
}
int menu()
{
	int choise;
	printf("\n\n\t\tmenu\n____________________________________________");
	printf("\n\t1\tsum of each degit\n");
	printf("\n\t2\tcheck of palindrom\n");
	printf("\n\t3\tcheck of armstrong\n");
	printf("\n\t4\tsum of squre serise\n");
	printf("\n\t5\t of exit\n____________________________________________\n");
	printf("enter your choise:");
	scanf("%d",&choise);
	return choise;
}
void sum()
{
	int n,i,s=0;
	printf("enter number to calculate sum:");
	scanf("%d",&n);
	while(n>0)
	{
		i=n%10;
		s=s+i;
		n=n/10;
	}
	printf("sum of each degit is:%d",s);
}
void palindrom(int n)
{
	int i,s=0,t=n;
	while(n>0)
	{
		i=n%10;
		s=(s*10)+i;
		n=n/10;
	}
	if(t==s)
		printf("number is palindrom.");
	else
		printf("number is not palindrom");
}
int armstrong()
{
	int a,c,d=0,j;
	printf("enter number to find number is armstrong or not.:");
	scanf("%d",&a);
	a=j;
	while(a>0)
	{
		c=a%10;
		d=d+(a*a*a);
		a=a/10;
	}
	if(j==d)
		return 1;
	else
		return 0;
}
int squre(int a)
{
	int b;
	printf("\n\n");
	for(b=1;b<=a;b++)
		printf("%d ",b*b);
	return 0;
}