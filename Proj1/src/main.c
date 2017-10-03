#include "debug.h"
#include "memory.h"
#include<stdlib.h>

int main()
{

uint8_t a[]={0,1,2,3,4,5,6};
uint8_t *c;
print_memory(a,7);
c=reserve_words(7);
printf("***********");
print_memory(c,7);
free(c);
//return 0;
}
