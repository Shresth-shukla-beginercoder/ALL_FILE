# include <stdio.h>
int fib(int n);

int main(){
    int fibn ;
    printf("enter fib :");
    scanf("%d",&fibn);

    printf("fibonacci is :%d",fib(fibn));
    return 0 ;
}int fib (int n){
    if(n == 0){
        return 0;

    }if(n == 1){
        return 1;
    }
    int fibn1 = fib(n-1);
    int fibn2 = fib(n-2);
    int fibn = fibn1 + fibn2 ;

  return fibn;
}


