#include <string.h>
#include<stdio.h>
#include<stdlib.h>

#include "debug.h"
#include "memory.h"
#include "conversion.h"
#include "project1.h"
#include "platform.h"



int main()
{

#ifdef PROJECT1
		
	project1();
	
#endif	

//uint8_t a[]="-2FD";
#ifndef PROJECT1

printf("\nNo Project 1 Compile Time Switch, if you need it run \nmake clean \nand use \nPS=-DPROJECT1\n");

uint8_t *b=malloc(10),c;
//int32_t d;

//uint32_t e[]={0xAA00CC15,0x90AB12CD};

c=my_itoa(-765,b,2);

print_memory(b,c);

//printf("\n %s \n",b);

//d=my_atoi(a,4,16);
//int i=0;
//printf("\n %d \n",d);
//print_memory(e,2);
/*for(i=0;i<2;i++)
{
	printf("-%x\n",*(e+i));
}

little_to_big32(e,2);

for(i=0;i<2;i++)
{
	printf("--%x\n",*(e+i));
}
*/
//print_memory(e,2);

#endif
return 0;
}
