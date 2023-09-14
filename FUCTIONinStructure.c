# include<stdio.h>

struct student {
    char name[100];
    int roll;
    float cgpa;

};
void printinfo(struct student s1);

int main (){
struct student s1 = {"shresth",88, 9.6};
 //s1.roll = 888; //: then it change by reference
printinfo(s1);

    return 0 ;
}
void printinfo(struct student s1){
    printf("student information :\n");
    printf("student name = %s\n",s1.name);
printf("roll number = %d\n", s1.roll);
printf("cgpa = %f\n",s1.cgpa);

 s1.roll = 888 ;
}