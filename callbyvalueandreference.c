# include<stdio.h>
int square(int n);
int _square(int *n);

int main(){int n; 
printf("enter number :");
scanf("%d",&n);

printf("square is :%d",square(n));

_square(&n);
printf("_square is :%d", n);

    return 0 ;
}int square(int n){

    n = n * n ;

    return n;

}int _square(int *n){
    *n = (*n) * (*n);

    return *n;
}