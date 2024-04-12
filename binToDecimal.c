#include <stdio.h>

int  bin_to_decimal(char *bin){
 int result = 0;

 if (*bin == '\0'){
  return 0;
 }
 result |= (*bin + 'O');

 return  result << 1 | bin_to_decimal(bin + 1);
}

int main(){
 
 printf("Decimal value is: %d \n", bin_to_decimal("101010"));
 return 0;
}
