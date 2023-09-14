#include<stdio.h>
int main (){

int marks[3];

printf("enter marks of subject 1 :");
scanf("%d", &marks[0]);
printf("enter marks of subject 2 :");
scanf("%d", &marks[1]);
printf("enter marks of subject 3 :");
scanf("%d", &marks[2]);
  printf("phy = %d\n maths = %d \n chem = %d\n", marks[0], marks[1],marks[2]);

    return 0 ;
}