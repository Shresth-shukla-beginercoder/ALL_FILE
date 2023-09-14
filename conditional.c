# include<stdio.h>

int main (){
int age;

printf(" enter age :");
scanf("%d", &age);

if (18 < age )
{
    printf("Adults");
    printf("you can drive");

}else{
    printf("not adult");
    printf("not aplicable");
}

return 0 ;

}