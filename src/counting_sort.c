#include "../include/counting_sort.h"

void counting_sort(FILE *file_ptr, int64_t min, int64_t max) {
    uint64_t range = max - min;
    uint8_t *counting_array;
    counting_array = calloc(range, sizeof(uint8_t));
    char line[MAX_LINE_LEN];
    while (fgets(line, MAX_LINE_LEN, file_ptr) != NULL) {
        int64_t num = atoll(line);
        if (min <= num && num <= max) {
            counting_array[max - num]++;
        }
    }
    for (int i = 0; i < range; i++)
        for (int j = 0; j < counting_array[i]; j++)
            printf("%lld\n", max - i);
    free(counting_array);
}
