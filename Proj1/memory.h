/**
*@file memory.h
*@brief Memory Manipulation functions
*@Author Aakash Kumar
*@date Sept 24 2017

*/
#ifndef MEMORY_H
#define MEMORY_H

#include<stdint.h>

uint8_t * my_memmove(uint8_t * src, uint8_t * dst, size_t length);
/*
@brief function to move contents of memory given the start of source address, 
start of destination address and length of data to be moved 
@param *src byte pointer to source adress
@param *dst byte pointer to destination address
@param length of bytes to be copied
@return  byte pointer to the destination
*/

uint8_t * my_memcpy(uint8_t * src, uint8_t *dst, size_t length);
/*
@brief function to copy contents of memory from one location to another location
@param *src byte pointer to source address
@param * dst byte pointer to destination address
@param length of bytes to be copied
@return byte pointer to destination
*/
int8_t *  my_memset(uint8_t  *  src,  size_t  length,  uint8_t  value);
/*

*/

uint8_t *  my_memzero(uint8_t  *  src,  size_t  length);
/*

*/

uint8_t *  my_reverse(uint8_t  *  src,  size_t  length);
/*

*/

int32_t *  reserve_words(size_t  length);
/*

*/

void free_words(int32_t  *  src);
/*

*/
#endif //MEMORY_h
