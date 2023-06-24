#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "include/counting_sort.h"

int main(int argc, char **argv) {
    if (argc != 4) {
        puts("Wrong number of args!");
        exit(EXIT_FAILURE);
    }
    char *file_path = argv[1];
    int64_t min = atoll(argv[2]);
    int64_t max = atoll(argv[3]);
    FILE *file_ptr = fopen(file_path, "r");
    if (file_ptr == NULL) {
        puts("Error reading file!");
        exit(EXIT_FAILURE);
    }
    if (min > max) {
        puts("Lower limit of the range is greater than the upper!");
        exit(EXIT_FAILURE);
    }
    uint64_t range = max - min;
    uint8_t *sort_array = init_sort_array(file_ptr, min, max, range);
    print_sorted_array(sort_array, max, range);
    create_sorted_txt_file(sort_array, max, range);
    free(sort_array);
}
