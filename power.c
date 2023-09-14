#include<stdio.h>
# include<math.h>
// made by me 
int main (){
 int a ;
 int b;

 printf("enter the number for equation :");
scanf("%d",&a);

printf("enter the number for power:");
scanf("%d",&b);

int power = pow(a,b);

printf("calculated value is :%d", power );

    return 0;
    
}