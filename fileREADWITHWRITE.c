#  include<stdio.h>

int main(){
FILE *fptr ;
 fptr = fopen("test.txt", "w");
 printf("%c",fputc('b',fptr));
 printf("%c",fputc('y',fptr));
// printf("%c",fgetc(fptr));
// printf("%c",fgetc(fptr));

fclose(fptr);
    return 0 ;
}