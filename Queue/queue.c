#include "queue.h"


Queue*
qadd(Queue* qend, int num, int* size)
{
    if (*size == 0)
    {
        qend->element = num;
        qend->next = NULL;
        (*size)++;

        return qend;
    }

    Queue* new_end = (Queue*)malloc(sizeof(Queue));

    if (new_end) 
    {
        new_end->element = num;
        new_end->next = NULL;
        qend->next = new_end;
        (*size)++;

        return new_end;
    }

    return qend;
}

Queue*
qpop(Queue* qstart, int* size) 
{
    if (qstart->next == NULL) 
    {
        printf("QUEUE IS EMPTY\n");

        return qstart;
    }

    Queue* new_start = qstart->next;
    (*size)--;

    free(qstart);

    return new_start;
}

void
print_queue(Queue* qstart)
{
    Queue* copy_q = qstart;

    while (copy_q != NULL)
    {
        printf("%d ", copy_q->element);
        copy_q = copy_q->next;
    }

    printf("\n");
}

void
check_queue_work()
{
    Queue* qstart = (Queue*)malloc(sizeof(Queue));
    Queue* qend = (Queue*)malloc(sizeof(Queue));

    int size = 0;

    int array[5] = {1, 4, 2, 10, 9};

    if (qstart == NULL || qend == NULL) 
    {
        printf("MALLOC PROBLEM\n");
    }

    qstart->next = NULL;
    qend = qstart;

    for (int i = 0; i < 5; i++)
    {
        qend = qadd(qend, array[i], &size);
        size++;
    }

    print_queue(qstart);
}