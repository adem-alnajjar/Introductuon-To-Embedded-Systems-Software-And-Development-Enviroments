/* Copyright (C) 2017 by Alex Fosdo
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.h 
 * @brief function declaration tells the comiler about a function's name
 * return type, and parameters.A function definition provides the actual body of the fuction
 * @website https://linkedin.com/in/adem-marangoz
 * 
 *
 * @author Adem Marangoz
 * @date 03.04.2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */

/**
 * @brief <Add Brief Description of Function Here>
 *
 * these function declaration, each one of them do operation on array,
 * Like sort function sorts the array from largest to smallest and
 * maximum function finds the largest number of an array
 */
// The print_array function print the array
void print_array(unsigned char *array, unsigned array_siz);
// The statistics function calls the ret of the functions
void print_statistics(unsigned char *array, unsigned array_siz);
// The sort function arranges the array form largest to smallest
void sort_array(unsigned char *array, unsigned array_siz);
// The minimum function finds the smallest number in the array
void find_minimum(unsigned char *array, unsigned array_siz);
// The maximum function finds the largest number in the array
void find_maximum(unsigned char *array, unsigned array_siz);
// The median function finds the middle number inside th array
void find_median(unsigned char *array, unsigned array_siz);
// The mean function finds the mean of the array
void find_mean(unsigned char *array, unsigned array_siz);


#endif /* __STATS_H__ */

