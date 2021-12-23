#include<stdio.h>
void main()
{
	int num,i,r1,r2;
	scanf("%d%d%d",&num,&r1,&r2);// 5 4 10
    for(i=r1;i<r2;i++)
    {
    	printf("%d %d =%d\n",num,i,num*i);
	}
				                               
}
