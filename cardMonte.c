#include <stdio.h>

/**
 The code is designed to shuffle the letters in the three-letter
 string “JQK.” Remember: in C, a string is just an array of
 characters. The program switches the characters around and
 then displays what the string looks like.

*/

int main(int argc, int *argv[]){

char cards[] = "JQK";

char a_card = cards[2];

cards[2] = cards[1];
cards[1] = cards[0];
cards[0] = cards[2];
cards[2] = cards[1];
cards[1] = a_card;

puts(cards);

return 0;

}

