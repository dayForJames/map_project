#pragma once 

#include <stdio.h>
#include <stdlib.h>

typedef struct Queue
{
    int element;
    struct Queue* next;
} Queue; 

Queue* qadd(Queue* qend, int num, int* size);
Queue* qpop(Queue* qstart, int* size);
void print_queue(Queue* qstart);
void check_queue_work();