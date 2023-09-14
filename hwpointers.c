#include<stdio.h>

int main()
{
	int no1,no2;
	int *ptr1,*ptr2;

	printf("Enter first number:");
	scanf("%d",&no1);

	printf("Enter second number:");
	scanf("%d",&no2);

	ptr1=&no1;/*ptr1 stores address of no1*/
	ptr2=&no2;/*ptr2 stores address of no2*/

	if(*ptr1>*ptr2)
	{printf("Maximum number is %d",*ptr1);}
	else{
	printf("Maximum number is %d",*ptr2); }
        return 0;
}