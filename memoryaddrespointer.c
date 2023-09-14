# include<stdio.h>

int main(){

int age;
int *ptr = &age;

printf("enter age :");
scanf("%d",&age);
//address
printf("address is :%p\n",&age);
printf("adress is in easy formate :%u\n",&age);
printf("addres of value save in ptr :%u\n",ptr);
printf("address for ptr:%u\n",&ptr);
//value
 printf("age is:%d\n",age );
 printf("value at ptr:%d\n ",*ptr);
 printf("value of address of age :%d\n", *(&age));



    return 0;

}