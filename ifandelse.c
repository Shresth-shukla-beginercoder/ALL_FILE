# include<stdio.h>
int main()
{
    int age ;
    printf("enter age :");
    scanf("%d",&age);

    if (18 <age)
    {
        printf("adult");
        printf("you can drive");

    }
    else{
        printf("not adults");
        printf("not aplicable");

    }
    return 0;

}