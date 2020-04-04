/* Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c 
 * @brief Week 1 Application Assignment
 * @website https://linkedin.com/in/adem-marangoz
 * 
 *
 * @author Adem Marangoz
 * @date 03.04.2020
 *
 */


/*Include the header files that we will user*/
#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

/* main function is the netry point 
 * it is the point at which execution of program is started
*/
void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  printf("Original array is : ");
  /*print orginal array*/
  print_array(test,SIZE);
  /*Call the statistics function to access the rest of the function */
  print_statistics(test,SIZE);
  /*Call th sort_array function*/
  sort_array(test,SIZE);
  printf("\n Sorted array is :");
  /*print the array after calling the sort_array*/
  print_array(test,SIZE);
}

/*Function to print array elements */
void print_array(unsigned char *array,unsigned array_siz)
{
 unsigned int x;
 printf("{");
 for(x=0;x<array_siz;x++)
 {
  if(x!=(array_siz-1))
  {
   printf("%d ,",array[x]);
  }
  else
  {
   printf("%d ",array[x]);
  }
 }
 printf("}\n");
}

/*A function that call the function fo statistics */
void print_statistics (unsigned char *array,unsigned array_siz)
{
  
  /*Call find_minimum function*/
  find_minimum(array,array_siz);
  /*Call find_maximum function*/
  find_maximum(array,array_siz);
  /*Call find_median function*/
  find_median(array,array_siz);
  /*Call find_mean fucntion*/
  find_mean(array,array_siz);
}
/*Function to compare the elements of array to sort them*/
void sort_array (unsigned char *array,unsigned array_siz)
{
  int temp=0;
  unsigned int x, coun;
  for (coun=0; coun<array_siz; coun++)
  {
    for (x=0; x<array_siz; x++)
    {
      if(array[coun]>array[x])
      {
	temp=array[coun];
	array[coun]=array[x];
	array[x]=temp;
      }
    }
  }
}
/*Function to compare the elements of array to find the minimum element*/
void find_minimum (unsigned char *array,unsigned array_siz)
{
  unsigned int x;
  int minimum_value=array[0];
  for(x=0;x<array_siz;x++)
  {
   if(array[x]<minimum_value)
   {
    minimum_value=array[x];
   }
  }
  printf("\n The minimum value inside an array : %d \n",minimum_value);
}

/*Function to compare the elements of array to fine the maximum element */
void find_maximum (unsigned char *array,unsigned array_siz)
{
 unsigned x;
 int maximum_value=array[0];
 for(x=0;x<array_siz;x++)
 {
  if(array[x]>maximum_value)
  {
   maximum_value=array[x];
  }
 }
 printf("\n The maximum value inside an array : %d \n",maximum_value);
}

/*Function to find the median member of un stored array */
void find_median (unsigned char *array,unsigned array_siz)
{
 int median_value;
 median_value=(array[(array_siz/2)+1] +array[array_siz/2])/2.0;
 printf("\n The median value for array : %d \n",median_value);
}

/*A function that finds the numerical mean of an array */
void find_mean (unsigned char *array,unsigned array_siz)
{
 unsigned int x,mean_value=0;
 for (x=0; x<array_siz;x++)
 {
  mean_value+= array[x];
 }
 mean_value/=array_siz;
 printf("\n the mean value for array : %d \n",mean_value);
}

