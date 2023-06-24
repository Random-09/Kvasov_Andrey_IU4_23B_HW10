#include "../include/counting_sort.h"

uint8_t *init_sort_array(FILE *file_ptr, int64_t min, int64_t max, uint64_t range) {
    uint8_t *sort_array;
    sort_array = calloc(range, sizeof(uint8_t));
    char line[MAX_LINE_LEN];
    while (fgets(line, MAX_LINE_LEN, file_ptr) != NULL) {
        int64_t num = atoll(line);
        if (min <= num && num <= max)
            sort_array[max - num]++;
    }
    return sort_array;
}

void print_sorted_array(const uint8_t *sort_array, int64_t max, uint64_t range) {
    for (int i = 0; i < range; i++) {
        for (int j = 0; j < sort_array[i]; j++)
            printf("%lld\n", max - i);
    }
}

void create_sorted_txt_file(const uint8_t *sort_array, int64_t max, uint64_t range) {
    FILE *output_file = fopen(OUTPUT_FILE_PATH, "w");
    for (int i = 0; i < range; i++) {
        for (int j = 0; j < sort_array[i]; j++)
            fprintf(output_file, "%lld\n", max - i);
    }
    fclose(output_file);
}