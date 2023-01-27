#include "lists.h"

/**
* free_list - fn
* @head: param
*/
void free_list(list_t *head)
{

while (head != NULL)
{
free(head->str);
free(head);

head = head->next;
}
}
