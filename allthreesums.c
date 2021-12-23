#include<stdio.h>
void main()
{
int n,sum1,sum2,sum3;
printf("enter anumber");
scanf("%d",&n);
sum1=(n*(n+1))/2;
sum2=n*(n+1);
sum3=n*n;
printf("sum of first %d natuaral number  is %d",n,sum1);
printf("sum of first %d even natural numbers is%d",n,sum2);
printf("sum of first %d odd natural numbers is %d",n,sum2);
}
