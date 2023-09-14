# include<stdio.h>
# include<string.h>

typedef struct addressof5people{
    int houseno;
    int block ;
    char city[100];
    char state[100];

} adp;

int main(){
adp p1 = {3001,75,"gorakhpur", "uttar pradesh"};
adp p2 = {3789, 78,"bhabua", "bihar"};

adp p3 = {4567, 898,"srinagar", "kasmir"};
adp p4 = { 6789, 89, "lucknow", "uttar pradesh"};
adp p5 = {6587, 767, "london", "england"};

printf("address of person1:\n houseno:%d\nblock:%d\ncity:%s\nstate:%s\n",p1.houseno,p1.block,p1.city,p1.state);
printf("address of person2:\n houseno:%d\nblock:%d\ncity:%s\nstate:%s\n",p2.houseno,p2.block,p2.city,p2.state);
printf("address of person3:\n houseno:%d\nblock:%d\ncity:%s\nstate:%s\n",p3.houseno,p3.block,p3.city,p3.state);
printf("address of person4:\n houseno:%d\nblock:%d\ncity:%s\nstate:%s\n",p4.houseno,p4.block,p4.city,p4.state);
printf("address of person5:\n houseno:%d\nblock:%d\ncity:%s\nstate:%s\n",p5.houseno,p5.block,p5.city,p5.state);
    return  0 ;
}
