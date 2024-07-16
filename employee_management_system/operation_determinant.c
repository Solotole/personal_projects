#include "main.h"
/**
 * determinant - function that determines the desired
 * operation by the user
 * @head: poiner containing the address to the first
 * node of the linked list
 * @entry: the desired operation by the user
 *
 * Return: return void
 */
void determinant(employee_list *head, int entry)
{
	switch (entry)
	{
		case 1:
			add_employee(&head);
			break;
		case 2:
			update_employee_details(head);
			break;
		case 3:
			delete_employee(&head);
			break;
		case 4:
			view_employee_details(head);
			break;
		case 5:
			reports(head);
			break;
		case 6:
			others(head);
			break;
		case 7:
			exit(EXIT_SUCCESS);
			break;
		default:
			printf("Wrong entry. Try again\n");
	}
}
