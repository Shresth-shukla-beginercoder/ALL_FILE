#include<stdio.h>
int main (){
    int n;
    printf("enter number :");
    scanf("%d",&n);
int fact= 1;

 for(int i = 1; i<=n;i++){
fact = fact * i;

 }printf("your factorial is :%d\n", fact);
 for(int i = n;i>=0;i--){
    printf(" %d\n", i);
 }
    return 0;
    
}