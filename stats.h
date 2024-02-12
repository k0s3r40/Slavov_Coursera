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
 * @brief Header file for statistical analytics on an array.
 *
 * Consists of the following functions
 *    main() - The main entry point for your program
 *    print_statistics() - A function that prints the statistics of an array including minimum, maximum, mean, and median.
 *    print_array() -  Given an array of data and a length, prints the array to the screen
 *    find_median() - Given an array of data and a length, returns the median value
 *    find_mean() -  Given an array of data and a length, returns the mean
 *    find_maximum() -  Given an array of data and a length, returns the maximum
 *    find_minimum() -  Given an array of data and a length, returns the minimum
 *    sort_array() - Given an array of data and a length, sorts the array from largest to smallest.  (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )
 *
 * @author Kostadin Slavov
 * @date 12 Feb 2024
 *
 */

#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief Prints the given array to the screen.
 *
 * @param test The array of data.
 * @param length The length of the array.
 */
void print_array(unsigned char test[], int length);

/**
 * @brief Finds and returns the median of the given array.
 *
 * @param test The array of data.
 * @return The median value.
 */
int find_median(unsigned char test[]);

/**
 * @brief Finds and returns the mean of the given sorted array.
 *
 * @param sorted The sorted array of data.
 * @return The mean value.
 */
int find_mean(unsigned char sorted[]);

/**
 * @brief Finds and returns the maximum value in the given array.
 *
 * @param test The array of data.
 * @return The maximum value.
 */
int find_maximum(unsigned char test[]);

/**
 * @brief Finds and returns the minimum value in the given array.
 *
 * @param test The array of data.
 * @return The minimum value.
 */
int find_minimum(unsigned char test[]);

/**
 * @brief Compares two elements for qsort.
 *
 * @param a The first element.
 * @param b The second element.
 * @return Negative if a < b, positive if a > b, zero if equal.
 */
int compare(const void *a, const void *b);

/**
 * @brief Sorts the given array from largest to smallest.
 *
 * @param test The array to be sorted.
 * @param sorted The array where the sorted elements will be stored.
 */
void sort_array(unsigned char test[], unsigned char sorted[]);

/**
 * @brief Prints the statistics of an array including minimum, maximum, mean, and median.
 *
 * @param test The original array of data.
 * @param sorted The sorted array of data.
 */
void print_statistics(unsigned char test[], unsigned char sorted[]);

#endif /* __STATS_H__ */
