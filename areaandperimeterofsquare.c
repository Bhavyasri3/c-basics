#include<stdio.h>
void main()
{
	int side,area,perimeter;
	printf("enter the side of the square ");
	scanf("%d",&side);
	area=side*side;
	perimeter=4*side;
	printf("the area of the square with side %d is %d\n",side,area);
    printf("the perimeter of the square with side %d is %d",side,perimeter);
}
