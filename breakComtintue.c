#include <stdio.h>
#include <stdlib.h>

int break_count(int *num){
 
int x = 0;
 while(x > 0){
    x++;
    if (x == *num)
        break; 
 }
 return 0;
}

int main(int argc, char *argv[]){

int *val;
*val = atoi(argv[1]);

break_count(val);

printf("Breaks after: %d iterations", *val);
 return 0;
}
