#ifndef TEMP_FUNCTIONS_H
#define TEMP_FUNCTIONS_H

typedef struct {
    int year;
    int month;
    int day;
    int hour;
    int minute;
    int temperature;
} Record;

void read_csv_file(const char* filename, Record* data, int* num_records);

#endif