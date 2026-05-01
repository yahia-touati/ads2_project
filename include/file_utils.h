#ifndef FILE_UTILS_H
#define FILE_UTILS_H
#include "common.h"

typedef struct {
    int   id;
    char  name[50];
    float score;
    char  category[20];
} Record;

int writeRecord(const char* filename, Record* r);

#endif