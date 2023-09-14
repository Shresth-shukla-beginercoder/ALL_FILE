# include<stdio.h>
int main(){
int age = 17;
int _age =16;
int *ptr = &age;
int *_ptr = &_age;
printf("%u\n\n%u\n\n", ptr,_ptr);

printf("subtraction = %d\n\n", ptr -_ptr);

_ptr = &age;

printf("comparision = %d\n\n", ptr == _ptr);


    return 0 ;

}