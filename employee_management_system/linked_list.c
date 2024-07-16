#include "main.h"
/**
 * linked_list - function that creates a linked list that
 * accomodates 1000 emplyees
 * @head: a pointer that contains address of the first node
 *
 * Return: return head of the list
 */
employee_list *linked_list(employee_list *head)
{
	employee_list *tmp = NULL;
	employee_list *ptr = *head;
	int i = 0;

	while (i < 1000)
	{
		tmp = malloc(sizeof(employee_list));
		if (tmp == NULL)
		{
			perror("memmory allocation failed\n");
			return (NULL);
		}
		tmp->link = NULL;
		if (ptr == NULL)
			*head = tmp;
		else
		{
			while (ptr->link != NULL)
				ptr = ptr->link;
			ptr->link = tmp;
		}
		i++;
	}
	return (head);
}
