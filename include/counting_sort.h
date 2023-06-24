#ifndef HW10_COUNTING_SORT_H
#define HW10_COUNTING_SORT_H

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define MAX_LINE_LEN 22
#define OUTPUT_FILE_PATH "../sorted_numbers.txt"

uint8_t *init_sort_array(FILE *file_ptr, int64_t min, int64_t max, uint64_t range);

void print_sorted_array(const uint8_t *count_sort_array, int64_t max, uint64_t range);

void create_sorted_txt_file(const uint8_t *count_sort_array, int64_t max, uint64_t range);

#endif
