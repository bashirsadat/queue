#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
int id;
double exec_time;
double arrival_time;
} process;


void print_process(process process_rec);
int compare_process(process p1, process p2);