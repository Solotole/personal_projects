#include "main.h"
/**
 * others - function that is task with of the asked
 * @head: poiner containing address of the fist
 * node
 * Return: return void
 */
void others(employee_list *head)
{
	int quantity;

	printf("enter your demand\n");
	printf("1 Department\n2 Gender\n");
	scanf("%d", &quantity);
	if (quantity == 1)
		department(head);
	else if (quantity == 2)
		gender(head);
	else
		printf("wrong key. Try again\n");
}
/**
 * department - furnction tasked with printing information
 * about employees in a certain department
 * @head: pointer to address of the first node
 *
 * Retun: return void
 */
void department(employee_list *head)
{
	char string[20];
	employee_list *ptr = head;

	printf("please enter your preferred department\n");
	fgets(string, 15, stdin);
	while (ptr != NULL)
	{
		if (strlen(ptr->ID) != 0)
		{
			if (strcmp(string, ptr->department) == 0)
			{
				printf("ptr->ID\nptr->name");
				printf("\nptr->salary\nptr->position\n");
			}
		}
		else
			break;
		ptr = ptr->link;
	}
}
/**
 * gender - function that handles gender
 * @head: pointer toaddress of the first node
 *
 * Return: return void
 */
void gender(employee_list *head)
{
	employee_list *ptr = head;
	char sex;

	printf("please enter your preferred gender\n");
	scanf("%c", &sex);
	while (ptr != NULL)
	{
		if (strlen(ptr->ID) != 0)
		{
			if (sex == ptr->gender)
			{
				printf("ptr->ID\nptr->name\nptr->salary");
				printf("\nptr->department\nptr->position");
			}
		}
		else
			break;
		ptr = ptr->link;
	}
}
