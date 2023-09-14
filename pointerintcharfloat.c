# include<stdio.h>

int main (){
int age = 22;
char hastag = '#';
float percentage = 64.00;
int *ptr1 = &age;
char *ptr2 = &hastag;
float *ptr3 = &percentage ;

int _age = *ptr1;
char _hastag = *ptr2;
float _percentage = *ptr3;

printf("int:%d\n char:%c\n float:%f\n",_age,_hastag,_percentage);


    return 0 ;
}