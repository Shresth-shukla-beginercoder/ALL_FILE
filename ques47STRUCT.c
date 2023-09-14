# include<stdio.h>

typedef struct complex{
    int real;
    int img;

} cp ;

int main(){
cp n1 ={3,9};
cp *ptr;
ptr = &n1;

printf("real part is :%d\n",ptr->real);
printf(" imaginary part is :%d", ptr->img);


}