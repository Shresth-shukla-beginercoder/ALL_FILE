#  include<stdio.h>

int main(){
FILE *fptr ;

 fptr = fopen("test.txt","r");
char ch;

fscanf( fptr , "%c", &ch);
printf("character is :%c\n",ch);
fscanf( fptr , "%c", &ch);
printf("character is :%c\n",ch);
int n;
fscanf( fptr , "%d", &n);
printf("character is :%d\n",n);
fscanf( fptr , "%d", &n);
printf("character is :%d\n",n);


fclose(fptr);
    return 0 ;
}