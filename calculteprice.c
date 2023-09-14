# include<stdio.h>

// 18 % GST nikalo freinds 
void calaculateprice(float value);

int main(){
    float value;
    printf("enter value :");
    scanf("%f", &value);

calaculateprice(value);
   
}void calaculateprice(float value){
    value = value + (0.18 * value);
    printf(" final value with 18 percentage GST: %f\n", value);

}