/*
*@file conversion.c
*@brief Data Manipulation functions
*@Author Aakash Kumar
*@date Oct 2 2017
*/
#include"conversion.h"
#include"debug.h"

char raw[]={"0123456789ABCDEF"} ;

uint8_t my_itoa(int32_t data,uint8_t * ptr, uint32_t base)
{
	int flag=0,j=0;
		
	if(data<0){ // checking if the number is negative and setting a flag
		data=data*-1;
		flag=1;
	}	
	
	// getting individual digits of the number and map it with the raw array to get the ascii equivalent
	while (data){  
		*(ptr+j)= *(raw+(data%base));
		data=data/base;
		j++;
	}	
	// if number is negative , add in the - character at end, as the full array is flipped later
	if(flag==1){
	*(ptr+j)=45;
	j++;
	}
	ptr=my_reverse(ptr,j); // when displayed as string the position of LSB,MSB is flipped, hence flip the full array.
	
		return j; //return length of array
}	

int32_t my_atoi(uint8_t * ptr,uint8_t digits,uint32_t base)
{
	int j=0,flag=0; // j is counter, flag to check for -ve numvers
	int32_t result=0,temp=0;
	
	if(*(ptr+j)=='-') { // checking for negative number
		j=1;
		flag=1;
	}	
	for(;j<digits;j++)
	{	
		if((*(ptr+j)-48)>9) temp=(*(ptr+j)-55) ; // if character is above 9 ie A-F then subtract 55 to get correct value
		else temp=(*(ptr+j)-48)	; // if the character is within 0-9 subtract 48 to get the correct digit value	
		result=(result * base)+(temp);
	}
	if(flag ==1) result=result*-1; // accounting for the negative number
	return result;
}	

int8_t big_to_little32(uint32_t * data,uint32_t length)
{
	int j=0;
	uint32_t temp=0,temp2;
	for(j=0;j<length;j++){
		temp=*(data+j);
		temp2 = (((temp>>24)&0xFF) | ((temp<<8)&0x00FF0000) | ((temp>>8)&0x0000FF00) | ((temp<<24)&0xFF000000));
		*(data+j)=temp2;
	}
	return 0;
}	

int8_t little_to_big32(uint32_t * data,uint32_t length)
{
	int j=0;
	uint32_t temp=0,temp2;
	for(j=0;j<length;j++){
		temp=*(data+j);
		temp2 = (((temp>>24)&0xFF) | ((temp<<8)&0x00FF0000) | ((temp>>8)&0x0000FF00) | ((temp<<24)&0xFF000000));
		*(data+j)=temp2;
	}
	return 0;
}	
	