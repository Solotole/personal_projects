#include "main.h"
/**
 * view_employee_details - function that allows for viewing employee's detail
 * @head: head of the linked list
 * Return: return void
 */
void view_employee_details(employee_list *head)
{
	char buffer[BUFF_SIZE];

	printf("please enter employees ID\n");
	fgets(buffer, BUFF_SIZE, stdin);
	if (strlen(buffer) >= 6)
	{
		while (head != NULL)
		{
			if (strlen(head->ID) != 0 && strcmp(buffer, head->ID) == 0)
			{
				printf("%s\n", head->ID);
				printf("%s\n", head->name);
				printf("%s\n", head->position);
				printf("%s\n", head->department);
				printf("%d\n", head->salary);
				printf("%c\n", head->gender);
				break;
			}
			head = head->link;
		}
	}
	else
		printf("short ID entry\n");
}
