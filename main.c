#include <stdio.h>
#include <stdlib.h>
#include "temp_functions.h"

#define MAX_RECORDS 100

int main() {
    Record data[MAX_RECORDS];
    int num_records = 0;

    read_csv_file("data.csv", data, &num_records);

    for (int i = 0; i < num_records; i++) {
        printf("Year: %d, Month: %d, Day: %d, Hour: %d, Minute: %d, Temperature: %d\n", data[i].year, data[i].month, data[i].day, data[i].hour, data[i].minute, data[i].temperature);
    }

    return 0;
}