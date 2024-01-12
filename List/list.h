#pragma once 

#include <stdlib.h>
#include <stdio.h>

typedef struct ListNode
{
    int vertex_num;
    int value;
    struct ListNode* next;
} ListNode;

typedef struct List
{
    int size;
    ListNode *head;
} List;

ListNode* ladd(ListNode* list, int value, int vert_num, int *size);
void lpop(ListNode* list, int pop_index, int *size);
void print_list(ListNode* list);
void check_list_work();