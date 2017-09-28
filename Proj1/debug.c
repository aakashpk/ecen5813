#include"debug.h"

void print_memory(uint8_t * start, uint32_t length) {
	#ifdef VERBOSE	
	if(!start){
		for(i==0;i<length;i++){
		printf("\n Value at Address:%x is %d\n",start+i,*(start+i));	
	 }
	}
#endif
}




