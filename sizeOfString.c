#include <stdio.h>

void fortune_cookie(char msg[]) // msg is actually  a pointer variable
{
printf("Message reads: %s\n", msg); // msg points to the message
printf("msg occupies %i bytes\n", sizeof(msg));  // isze pf the msg pointer== size of a pointer
printf("The quote string is stored at: %p\n", msg);
printf("long var: %ld\n", (long)msg);
}


int main() {

char quote[] = "Cookies make you fat";
fortune_cookie(quote);
printf("quote[]  occupies %i bytes\n", sizeof(quote));

return 0;
}
