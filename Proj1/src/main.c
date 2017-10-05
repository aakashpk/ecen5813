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

#ifndef PROJECT1

printf("\nNo Project 1 Compile Time Switch, if you need it run \nmake clean \nand use \nPS=-DPROJECT1\n");

#endif
return 0;
}
