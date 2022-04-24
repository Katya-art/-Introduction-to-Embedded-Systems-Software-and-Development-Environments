/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
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
 * @brief The implementation file of the c1m1 assignment
 *
 *
 *
 * @author Kateryna Kravchenko
 * @date 24.04.2022
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  unsigned char minimum = 0;
  unsigned char maximum = 0;
  float mean = 0;
  unsigned char median = 0;
  /* Statistics and Printing Functions Go Here */
  printf("Array before sorting: \n");
  print_array(&test, SIZE);
  median = find_median(&test, SIZE);
  mean = find_mean(&test, SIZE);
  maximum = find_maximum(&test, SIZE);
  minimum = find_minimum(&test, SIZE);
  print_statistics(minimum, maximum, mean, median);
  sort_array(&test, SIZE);
  printf("Array after sorting: \n");
  print_array(&test, SIZE);
}

/* Add other Implementation File Code Here */
void print_statistics (unsigned char minimum, unsigned char maximum, float 
mean, unsigned char median){
  printf("Minimum: %d \n", minimum);
  printf("Maximum: %d \n", maximum);
  printf("Mean: %f \n", mean);
  printf("Median: %d \n", median);
}

void print_array (unsigned char *arr, unsigned int n){
  int i;
  for (i = 0; i < n; i++)
    printf("%d ", arr[i]);
  printf("\n");
}

unsigned char find_median (unsigned char *arr, unsigned int n){
  /* calculation of median */
   if (n % 2 == 0)
      return (arr[n/2] + arr[n/2+1])/2.0 ;
   return arr[n/2 + 1];
}

float find_mean (unsigned char *arr, unsigned int n){
  float sum = 0.0;
  for (int i = 0; i < n; ++i) {
      sum += arr[i];
  }
  return sum / n;
}

unsigned char find_maximum (unsigned char *arr, unsigned int n){
  unsigned char maximum = *arr;
  for (int i = 1; i < n; ++i) {
    if (maximum < arr[i]) {
      maximum = arr[i];
    }
  }
  return maximum;
}

unsigned char find_minimum (unsigned char *arr, unsigned int n){
  unsigned char minimum = *arr;
  for (int i = 1; i < n; ++i) {
    if (minimum > arr[i]) {
      minimum = arr[i];
    }
  }
  return minimum;
}

void sort_array (unsigned char *arr, unsigned int n){
  int i, j, a;
  for (i = 0; i < n; ++i){
      for (j = i + 1; j < n; ++j){
         if (arr[i] < arr[j]){
            a = arr[i];
            arr[i] = arr[j];
            arr[j] = a;
         }
      }
   }
}
