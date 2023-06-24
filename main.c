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
    counting_sort(file_ptr, min, max);
}
