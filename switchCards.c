
#include <stdio.h>
#include <stdlib.h>
/**
 --buggy--
*/

int  switchCards(char *cardName){

int *val;

*val = 0;
 switch(cardName){
   case 'K':
   case 'J':
   case 'Q':
        *val = 0;
   break;
   case 'A':
        *val = 10;
   break;

   default:
        *val = atoi(cardName);
 }

/* Check if the value is 3 to 6 */
if ((*val > 2) && (*val < 7))
puts("Count has gone up");
/* Otherwise check if the card was 10, J, Q, or K */
else if (*val == 10)
puts("Count has gone down");

return 0;

}

int main(int argc, char *argv[]){

char *card_name;

if (argc < 2){
 printf("No card name value provided!\n");
 return 1;
}

*card_name = argv[1];

switchCards(card_name);

 return 0;
}
