#include <stdio.h>
#include <stdlib.h>
#include "temp_functions.h"

void read_csv_file(const char* filename, Record* data, int* num_records) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening.\n");
        exit(1);
    }

    int i = 0;
    while (fscanf(file, "%d;%d;%d;%d;%d;%d", &data[i].year, &data[i].month, &data[i].day, &data[i].hour, &data[i].minute, &data[i].temperature) == 6) {
        i++;
    }

    *num_records = i;

    fclose(file);
}
