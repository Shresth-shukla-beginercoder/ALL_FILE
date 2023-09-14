# include<stdio.h>

void charcheck(char str[], char n);
int main(){
char star[] = " many more knwoledege you to leran my boy :) life is struggle";

char ch = 'k';
charcheck(star,ch);
    return 0 ;
}void  charcheck(char str [], char n){
for(int i = 0 ; str[i] != '\0';i++){
    if(str[i] == n){
        printf("char is present");
   
        return;

    }

}
printf("char is not present");

}