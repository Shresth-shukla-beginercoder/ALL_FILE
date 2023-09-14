#  include<stdio.h>

int main(){
FILE *fptr ;
 fptr = fopen("test.txt", "a");

fprintf(fptr , "%c",'b');
fprintf(fptr , "%c",'y');
fclose(fptr);
    return 0 ;
}