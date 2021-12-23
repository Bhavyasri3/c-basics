 #include<stdio.h>
 void main()
 {
    int num1,num2,sum,difference,product,remain;
    float quotient;
	printf("enter two numbers");
	scanf("%d%d",&num1,&num2);
	sum=num1+num2;
	difference=num1-num2;
	product=num1*num2;
	quotient=num1/num2;
	remain=num1%num2;
	printf("sum of%d and%d is %d\n ",num1,num2,sum);
	printf("difference of %d and %d is %d\n",num1,num2,difference);
	printf("product of %d and %d is %d\n",num1,num2,product);
	printf("qoutient of %d and %d is %f\n",num1,num2,quotient);
	printf("remainder when  %d is divided by %d is %d",num1,num2,remain);
}
