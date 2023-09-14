# include<stdio.h>
# include<string.h>

typedef struct addressof5people{
    int houseno;
    int block ;
    char city[100];
    char state[100];

} adp;

void addressprint( struct addressof5people per );

int main(){
adp per[5];

printf("enter address of 1st person :");
scanf("%d",&per[0].houseno);
scanf("%d",&per[0].block);
scanf("%s",per[0].city);
scanf("%s",per[0].state);
addressprint(per[0]);
printf("enter address of 2nd person :");
scanf("%d",&per[1].houseno);
scanf("%d",&per[1].block);
scanf("%s",per[1].city);
scanf("%s",per[1].state);
addressprint(per[1]);
printf("enter address of 3rd person :");
scanf("%d",&per[2].houseno);
scanf("%d",&per[2].block);
scanf("%s",per[2].city);
scanf("%s",per[2].state);
addressprint(per[2]);
printf("enter address of 4th person :");
scanf("%d",&per[3].houseno);
scanf("%d",&per[3].block);
scanf("%s",per[3].city);
scanf("%s",per[3].state);
addressprint(per[3]);
printf("enter address of 5th person :");
scanf("%d",&per[4].houseno);
scanf("%d",&per[4].block);
scanf("%s",per[4].city);
scanf("%s",per[4].state);
addressprint(per[4]);

    return 0 ;
}
void addressprint( struct addressof5people per){
    printf("addres is :%d,%d,%s,%s\n",per.houseno,per.block,per.city,per.state);
}

