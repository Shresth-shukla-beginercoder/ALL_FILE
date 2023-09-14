# include<stdio.h>

struct vector {
    int x;
    int y;

};

void sumequal( struct vector v1 ,struct vector v2, struct vector sum);
int main(){
struct vector v1 = {5,8};
struct vector v2 = {6,9};
struct vector sum ={0};

sumequal(v1,v2,sum);

    return 0 ;
}void sumequal( struct vector v1 ,struct vector v2, struct vector sum){
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;
    printf("sum of x vector is :%d",sum.x );
     printf("sum of y vector is :%d",sum.y );
    
}
