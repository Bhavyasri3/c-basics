#include<stdio.h>
void main()
{
	int l,b,area,perimeter;
	printf("enter length and breadth");
	scanf("%d%d",&l,&b);
	area=l*b;
	perimeter=2*(l+b);
	printf("area of rectangle with length %d and breadth %d is %d\n",l,b,area);
	printf("perimeter of rectangle  with length %d and breadth %d is %d",l,b,perimeter);
}
