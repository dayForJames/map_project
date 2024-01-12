#include "list.h"

ListNode*
ladd(ListNode* list, int value, int vert_num, int *size)
{
    if (*size == 0)
    {
        ListNode* new_list = (ListNode*)malloc(sizeof(ListNode));
        new_list->value = value;
        new_list->vertex_num = vert_num;
        new_list->next = NULL;
        (*size)++;

        free(list);

        return new_list;
    }

    ListNode* new_element = (ListNode*)malloc(sizeof(ListNode));

    if (new_element == NULL) 
    {
        return NULL;
    } 

    new_element->value = value;
    new_element->next = list;
    new_element->vertex_num = vert_num;

    (*size)++;

    return new_element; 
}

void 
lpop(ListNode* list, int pop_index, int *size)
{
    ListNode* copy_list = list;
    ListNode* prev_el = list;

    int i = 0;
    
    while (copy_list != NULL && i != pop_index)
    {
        prev_el = copy_list;
        copy_list = copy_list->next;

        i++;
    }

    if (copy_list == NULL) {
        return;
    }

    if (copy_list->next != NULL)
    {
        ListNode* next_el = copy_list->next;
        prev_el->next = next_el;
    }
    else
    {
        prev_el->next = NULL;
    }

    (*size)--;

    free(copy_list);
}

void 
print_list(ListNode* list)
{
    ListNode* copy_list = list;
    while (copy_list != NULL)
    {
        printf("%d ", copy_list->value);
        copy_list = copy_list->next;
    }

    printf("\n");
}

void
check_list_work()
{
    ListNode* list = (ListNode*)malloc(sizeof(ListNode));
    int size = 0;
    int arr[5] = {9, 3, 1, 0, 5};
    int vert_arr[5] = {1, 3, 5, 2, 4};

    for (int i = 0; i < 5; i++)
    {
        list = ladd(list, arr[i], vert_arr[i], &size);
    }

    print_list(list);
    lpop(list, 2, &size);
    print_list(list);
}