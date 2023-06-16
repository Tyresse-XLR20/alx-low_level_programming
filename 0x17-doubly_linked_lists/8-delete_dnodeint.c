int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *temp, *prev, *curr;
unsigned int i = 0;

if (*head == NULL || head == NULL)
return (-1);

if (index == 0 && *head != NULL)
{
temp = *head;
*head = (*head)->next;
if (*head != NULL)
(*head)->prev = NULL;
free(temp);
return (1);
}
prev = *head;
curr = (*head)->next;
while (curr && i < index - 1)
{
prev = curr;
curr = curr->next;
i++;
}
if (curr)
{
temp = curr;
prev->next = curr->next;
free(temp);
return (1);
}

return (-1);
}
