#include<stdio.h>
void main()
{
	int amt;
	int a,b,c,d,e,f,g,h,i,j;
	printf("enter the amount");
	scanf("%d",&amt);
	a=amt/2000;
	amt=amt%2000;
	b=amt/500;
	amt=amt%500;
	c=amt/200;
	amt=amt%200;
	d=amt/100;
	amt=amt%100;
	e=amt/50;
	amt=amt%50;
	f=amt/20;
	amt=amt%20;
	g=amt/10;
	amt=amt%10;
	h=amt/5;
	amt=amt%5;
	i=amt/2;
	amt=amt%2;
	j=amt/1;
	amt=amt%1;
	printf("2000 notes= %d\n 500 notes=%d\n 200 notes=%d\n 100 notes=%d\n 50 notes=%d\n 20 notes=%d\n 10 notes=%d\n 5 notes=%d\n 2 notes=%d\n 1 notes=%d\n",a,b,c,d,e,f,g,h,i,j);
}
