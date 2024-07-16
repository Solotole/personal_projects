#include "main.h"
/**
 * update_employee_details - function that updates employee details
 * @head: the pointer containing address to the first node of the linked list
 * Return: return void
 */
void update_employee_details(employee_list *head)
{
	char buffer[BUFF_SIZE], ch;
	int entry;

	if (strlen(buffer) >= 6)
	{
		while (True)
		{
			while ((h != NULL && strlen(h->ID) != 0)
			{
				printf("please enter employees ID\n");
				fgets(buffer, BUFF_SIZE, stdin);
				printf("What information do you prefer to change?\n");
				printf("1 ID\n2 name\n3 gender\n4 department");
				printf("5 position\n6 salary\n");
				scanf("%d", &entry);
				if (strcmp(buffer, h->ID) == 0)
					adding(employee_list *head, int entry);
				else
					continue;
				h = h->link;
			}
			printf("Do you wish for any other update?\n");
			printf("Please enter Y-yes or N-no: \n");
			scanf("%c", &char);
			if (ch == 'Y')
				continue;
			if (ch == 'N')
				break;
			if (ch != 'Y' || ch != 'N')
			{
				printf("Unfamiliar entry. Try later\n");
				break;
			}
		}
	}
	else
		printf("short ID entry\n");
}
/**
 * adding - function thet carry out operations
 * @head: pointer containing address of the first node
 * @entry: the user input
 *
 * Return: return void
 */
void adding(employee_list *head, int entry)
{
	char gender, buffer[BUFF_SIZE];
	employee_list *h = head;
	int salary;

	switch (entry)
	{
		case 1:
			printf("Please enter the updated ID\n");
			fgets(buffer, BUFF_SIZE, stdin);
			if (strcmp(h->ID, buffer) == 0)
			{
				free(h->ID);
				h->ID = strdup(buffer);
			}
			break;
		case 2:
			printf("Please enter the updated name\n");
			fgets(buffer, BUFF_SIZE, stdin);
			if (strcmp(h->name, buffer) == 0)
			{
				free(h->name);
				h->name = strdup(buffer);
			}
			break;
		case 3:
			printf("Please enter the updated gender M-male or F-female\n");
			scanf("%c", &gender);
			if (h->gender != gender)
				h->gender = gender;
			break;
		case 4:
			printf("Please enter the updated department\n");
			fgets(buffer, BUFF_SIZE, stdin);
			if (strcmp(h->department, buffer) == 0)
			{
				free(h->department);
				h->department = strdup(buffer);
			}
			break;
		case 5:
			choice_5(h);
			break;
		case 6:
			printf("Please enter the updated salary\n");
			scanf("%d", &salary);
			h = h->salary;
			break;
		default:
			printf("Unsupported input. Try again later\n");
	}
}
/**
 * choice_5 - function that caries the freeing of position
 * /
void choice_5(employee_list *head)
{
	char buffer[BUFF_SIZE];

	printf("Please enter the updated position\n");
	fgets(buffer, BUFF_SIZE, stdin);
	if (strcmp(h->department, buffer) == 0)
	{
		free(h->position);
		h->position = strdup(buffer);
	}
}
