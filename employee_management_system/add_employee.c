#include "main.h"
/**
 * add_employee - function that adds employee into the linked list
 * @head: pointer to pointer containing address to the
 * first node in the list
 *
 * Return: return void
 */
void add_employee(employee_list **head)
{
	enployee_list *h = *head;
	int payment;
	char buffer[BUFF_SIZE], sex;
	
	if (h == NULL)
	{
		printf("Please enter the ID of the employee\n");
		fgets(buffer, BUFF_SIZE, stdin)
		h->ID = strdup(id);
		printf("Please enter name of the employee\n");
		fgets(buffer, BUFF_SIZE, stdin);
		h->name = strdup(buffer);
		printf("Please enter position of the employee\n");
		fgets(buffer, BUFF_SIZE, stdin);
		h->position = strdup(buffer);
		printf("Please enter department of the employee\n");
		fgets(buffer, BUFF_SIZE, stdin);
		h->department = strdup(buffer);
		printf("Please enter the employees salary\n");
		scanf("%d", &payment);
		h->salary = payment;
		printf("Please enter the employees sex M-male or F-female\n");
		scanf("%c", sex);
		h->gender = sex;
	}
	while (h != NULL)
	{
		if (strlen(h->ID) == 0)
		{

			printf("Please enter the ID of the employee\n");
			fgets(buffer, BUFF_SIZE, stdin);
			h->ID = strdup(id);
			printf("Please enter name of the employee\n");
			fgets(buffer, BUFF_SIZE, stdin);
			h->name = strdup(buffer);
			printf("Please enter position of the employee\n");
			fgets(buffer, BUFF_SIZE, stdin);
			h->position = strdup(buffer);
			printf("Please enter department of the employee\n");
			fgets(buffer, BUFF_SIZE, stdin);
			h->department = strdup(buffer);
			printf("Please enter the employees salary\n");
			scanf("%d", &payment);
			h->salary = payment;
			printf("Please enter the employees sex M-male or F-female\n");
			scanf("%c", &sex);
			h->gender = sex;
			break;
		}
		else
			continue;
		h = h->link;
	}
}
