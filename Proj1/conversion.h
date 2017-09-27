/*
*@file memory.h
*@brief Data Manipulation functions
*@Author Aakash Kumar
*@date Sept 27 2017
*/
#ifndef CONVERSION_H
#define CONVERSION_H

#include<stdint.h>

uint8_t my_itoa(int32_t ​ ​data, ​ ​uint8_t ​ ​* ​ ​ptr, ​ ​uint32_t ​ ​base);
/*

*/

int32_t my_atoi(uint8_t ​ ​* ​ ​ptr, ​ ​uint8_t ​ ​digits, ​ ​uint32_t ​ ​base);
/*

*/

int8_t big_to_little32(uint32_t ​ ​* ​ ​data, ​ ​uint32_t ​ ​length);
/*

*/

int8_t little_to_big32(uint32_t ​ ​* ​ ​data, ​ ​uint32_t ​ ​length);
/*

*/
#endif //CONVERSION_H