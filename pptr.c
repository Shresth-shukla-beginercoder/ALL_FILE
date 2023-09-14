# include<stdio.h>
int main (){
    int price;
int *ptr =&price;
int  **pptr = &ptr;

printf("enter price:");
scanf("%d",&price);

printf("value is :%d\n", **pptr);

printf("&**pptr = %u\n",&**pptr);
printf("&*ptr = %u\n",&*ptr);
printf("&ptr = %u\n",&ptr);
printf("ptr = %u\n",ptr);
    return 0 ;

}