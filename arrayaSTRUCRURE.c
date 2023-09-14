# include<stdio.h>

# include<string.h>

struct student {
    char name[100];
    int roll;
    float cgpa;

};
int main(){
struct student CSAI[100];
strcpy(CSAI[0].name,"SHRESTH");
CSAI[0].roll = 88;
CSAI[0].cgpa = 9.6;

printf("student name is = %s\n", CSAI[0].name);
printf("student roll is = %d\n", CSAI[0].roll);
printf("student cgpa is = %f\n", CSAI[0].cgpa);

    return 0 ;
}