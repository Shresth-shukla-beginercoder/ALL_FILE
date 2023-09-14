# include <stdio.h>

int main(){

    char name[100];
    fgets(name ,100, stdin );// gets also in use but it is dangerous to use it 
    puts(name);
    return 0 ;
}