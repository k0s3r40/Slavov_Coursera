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
 * @brief Prints several statistics of an array
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



#include <stdio.h>
#include <stdlib.h>
#include "stats.h"
/* Size of the Data Set */
#define SIZE (40)


void print_array(unsigned char test[SIZE], int length) {
    //    Given an array of data and a length, prints the array to the screen
    for (int i = 0; i < length; i++) {
        printf("%d\n", test[i]);
    }
}


int find_median(unsigned char test[SIZE]) {
//    Given an array of data and a length, returns the median value
    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += test[i];
    }
    return sum / SIZE;
}

int find_mean(unsigned char sorted[SIZE]) {
//    Given an array of data and a length, returns the mean
    if (SIZE % 2 == 0) {
        return (sorted[(SIZE / 2) - 1] + sorted[SIZE / 2]) / 2;
    } else {
        return sorted[SIZE / 2];
    }

}

int find_maximum(unsigned char test[SIZE]) {
//    Given an array of data and a length, returns the maximum
    int max = test[0];
    for (int i = 0; i < SIZE; i++) {
        if (test[i] > max) {
            max = test[i];
        }
    }
    return max;
}

int find_minimum(unsigned char test[SIZE]) {
    //    Given an array of data and a length, returns the minimum
    int min = test[0];
    for (int i = 0; i < SIZE; i++) {
        if (test[i] < min) {
            min = test[i];
        }
    }
    return min;
}

int compare(const void *a, const void *b) {
    unsigned char val1 = *(const unsigned char *) a;
    unsigned char val2 = *(const unsigned char *) b;
    return (val2 - val1);
}

void sort_array(unsigned char test[SIZE], unsigned char sorted[SIZE]) {
    //    Given an array of data and a length, sorts the array from largest to smallest.
    //    (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )
    for (int i = 0; i < SIZE; i++) {
        sorted[i] = test[i];
    }

    qsort(sorted, SIZE, sizeof(unsigned char), compare); // Sort the array
}

void print_statistics(unsigned char test[SIZE], unsigned char sorted[SIZE]) {
    //    A function that prints the statistics of an array including minimum, maximum, mean, and median.
    printf("Minimum: %d\n", find_minimum(test));
    printf("Maximum: %d\n", find_maximum(test));
    printf("Mean: %d\n", find_mean(sorted));
    printf("Median: %d\n", find_median(test));

}

void main() {

    unsigned char test[SIZE] = {34, 201, 190, 154, 8, 194, 2, 6,
                                114, 88, 45, 76, 123, 87, 25, 23,
                                200, 122, 150, 90, 92, 87, 177, 244,
                                201, 6, 12, 60, 8, 2, 5, 67,
                                7, 87, 250, 230, 99, 3, 100, 90};
    unsigned char sorted[SIZE];
    for (int i = 0; i < SIZE; i++) {
        sorted[i] = test[i];
    }
    sort_array(test, sorted);
    print_statistics(test, sorted);
    print_array(test, SIZE);

}

