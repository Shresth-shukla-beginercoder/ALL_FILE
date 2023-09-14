# include<stdio.h>
 int main (){
     int age ;

     printf("enter age:");
     scanf("%d",&age);

     if (18 <= age)
     {printf("adults");
     printf("you can drive");

     }
else if (age > 13 && age < 18 )
{
    printf("teenager");
}
else{
    printf("child");
    
}
 }