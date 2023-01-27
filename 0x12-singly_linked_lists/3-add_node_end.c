#include "lists.h"
#include <string.h>

/**
* add_node_end - fn
* @head: previous element
* @str: str
* Description: sth
* Return: next element
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *x;
unsigned int i = 0;
if (str == NULL)
{
return (NULL);
}

while (str[i])
i++;

new = malloc(sizeof(list_t));

if (new == NULL)
{
return (NULL);
}
new->str = strdup(str);

if (new->str == NULL)
{
free(new);
return (NULL);
}

new->len = i;
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
x = *head;
while (x->next)
x = x->next;
x->next = new;

return (new);
}
