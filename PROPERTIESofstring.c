# include<stdio.h>
int main (){
    char *canchange = " hii me shresth";
    puts(canchange);
    canchange = " shresth";
    puts(canchange);

char cannotchange[] = "me shresth";
puts(cannotchange);

// cannotchange = "shresth"; red line showing instantaly
// puts(cannotchange);

}