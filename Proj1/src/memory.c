/**
*@file memory.c
*@brief Memory Manipulation functions
*@Author Aakash Kumar
*@date Sept 24 2017

*/
#include"debug.h"
#include"memory.h"

//extern mem_buffer[];
int i=0;

uint8_t * my_memmove(uint8_t * src, uint8_t * dst, size_t length){
	 print_memory(src,length);
	for(i=0;i<length;i++)
	{
		 *(mem_buffer+i)=*(src+i);
	}
	for(i=0;i<length;i++)
	{
		*(dst+i)=*(mem_buffer+i);
	}
	print_memory(dst,length);
	
return dst;
}

uint8_t * my_memcpy(uint8_t * src, uint8_t *dst, size_t length){
	print_memory(src,length);
	for(i=0;i<length;i++)
	{
		 *(dst+i)=*(src+i);
	}
return dst;
}

uint8_t *  my_memset(uint8_t  *  src,  size_t  length,  uint8_t  value){
	
	for(i=0;i<length;i++)
	{
		 *(src+i)=value;
	}
return src;
}

uint8_t *  my_memzero(uint8_t  *  src,  size_t  length){
	for(i=0;i<length;i++)
	{
		 *(src+i)=value;
	}
return src;
}


uint8_t *  my_reverse(uint8_t  *  src,  size_t  length){
	
	for(i=0;i<length;i++)
	{
		 *(mem_buffer+i)=*(src+i);
	}
	for(i=0;i<length/2;i++)
	{
		*(src+i)=*(mem_buffer+length-i);
	}
	print_memory(dst,length);
	
return src;

}


int32_t *  reserve_words(size_t  length){
	return 0;
}

void free_words(int32_t  *  src){

}

