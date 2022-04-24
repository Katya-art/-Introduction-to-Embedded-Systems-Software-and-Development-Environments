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
 * @file stats.h 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author Kateryna Kravchenko
 * @date 24.04.2022
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Prints the statistics of a given array
 *
 *
 *
 * @param minimum - minimum number of the given array
 * @param maximum - maximum number of the given array
 * @param mean - mean of the given array
 * @param median - median of the given array
 *
 * @return void
 */
void print_statistics (unsigned char minimum, unsigned char maximum, float 
mean, unsigned char median);

/**
 * @brief Prints the contents of a given array
 *
 * This function takes the given array and prints it to the
 * screen.
 * 
 * @param arr - the first element of the array to be printed on the 
screen
 *
 * @return void
 */
void print_array (unsigned char *arr, unsigned int n);


/**
 * @brief Finds the median of the given array
 *
 * This function takes the given array and finds
 * its median.
 * 
 * @param arr - first element of the array to be processed
 *
 * @return median - median value of the given array.
 */
unsigned char find_median (unsigned char *arr, unsigned int n);

/**
 * @brief Finds the mean of the given array
 *
 * This function takes the given array and finds
 * its mean.
 * 
 * @param arr - the first element of the array to be processed
 *
 * @return mean - mean value of the given array.
 */
float find_mean (unsigned char *arr, unsigned int n);

/**
 * @brief Finds the maximum of the given array
 *
 * This function takes the given array and finds
 * its maximum.
 * 
 * @param arr - the first element of the array to be processed
 *
 * @return maximum - the maximum value of the given array.
 */
unsigned char find_maximum (unsigned char *arr, unsigned int n);

/**
 * @brief Finds the minimum of the given array
 *
 * This function takes the given array and finds
 * its minimum.
 * 
 * @param arr - the first element of the array to be processed
 *
 * @return minimum - minimum value of the given array.
 */
unsigned char find_minimum (unsigned char *arr, unsigned int n);

/**
 * @brief Sorts the given array from the largest to smallest
 *
 * This function takes the given array and its length, sorts
 * the array from the largest to smallest using bubble sort and returns 
the
 * sorted array.
 * 
 * @param arr - the first element of the array to be processed
 *
 * @return median - median value of the given array.
 */
void sort_array (unsigned char *arr, unsigned int n);


#endif /* __STATS_H__ */
