#include<stdio.h>
void main()
{
	float r,area,perimeter;
	printf("enter radius");
	scanf("%f",&r);
	area=3.14*r*r;
	perimeter=2*3.14*r;
	printf("the area of the circle with radius %f is %f\n",r,area);
	printf("the perimeter of the circle with radius %f is %f",r,perimeter);
}
