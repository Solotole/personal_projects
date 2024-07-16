#include "main.h"
/**
 * delete_employee - function that deletes employee
 * @head: pointer to pointer containing address of the first node
 *
 * Return: return void
 */
void delete_employee(employee_list **head)
{
	employee_list *tmp = NULL, *h;
	char buffer[BUFF_SIZE], ch;
	int counter = 0;

	while (True)
	{
		h = head;
		printf("Please enter employee ID\n");
		fgets(buffer, BUFF_SIZE, stdin);
		while (h != NULL && strlen(buffer) >= 6)
		{
			if ((h->ID != 0 && strcmp(buffer, h->ID) == 0) && counter == 0)
			{
				head = head->link;
				free(h);
				h = NULL;
				break;
			}
			else if ((h->ID != 0 && strcmp(buffer, h->ID) == 0) && counter > 0)
			{
				greater(h, tmp);
				break;
			}
			tmp = h;
			counter++;
			h = h->link;
		}
		printf("Do you wish to delete another employee?\n");
		printf("Please enter the your choice Y-yes or N-no\n");
		if (ch == 'Y')
			continue;
		if (ch == 'N')
			break;
	}
}
/**
 * greater - function that deletes a node(employee) past
 * the the first node
 * @head: pointer to the node(employee) to delete
 * @ptr: pointer to the node previous to the node to delete
 * Return: return void
 */
void greater(employee_list *head, employee_list *ptr)
{
	employee_list *h = head;

	free(h->ID);
	free(h->name);
	free(h->position);
	free(h->department);
	ptr->link = h->link;
	free(h);
	h = NULL;
}
