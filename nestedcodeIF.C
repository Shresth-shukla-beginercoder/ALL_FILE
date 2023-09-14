#include<stdio.h>
int main (){
 int number;
 printf("enter number :");

scanf("%d",&number);

if (number >= 0)
{
    printf(" positive ");

    if (number % 2== 0)
    {
       printf(" even number ");

    }else {
        printf(" odd number");

    }
    
}else {
    printf("negative ");

}
    return 0;
    
}