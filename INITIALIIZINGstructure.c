# include<stdio.h>

struct student
{
    char name[100];
    int roll;
    float cgpa; 
};
int main (){
struct student s1 ={"shresth",88,9.6};
printf("name of student = %s\n roll number of student = %d\n cgpa = %f\n",s1.name , s1.roll,s1.cgpa);
struct student *ptr;
ptr = &s1;
printf("name of student = %s\n roll number of student = %d\n cgpa = %f\n",(*ptr).name ,(*ptr).roll,(*ptr).cgpa);
// (*ptr).name <--> ptr->name// ;)
printf("student name with arrow = %s", ptr->name);

    return 0 ;
}