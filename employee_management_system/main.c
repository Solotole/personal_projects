#include "main.h"
/**
 * main - main entry point of the program
 *
 * Return: return 0 by default upon success
 */
int main(void)
{
	char *set_password = "2q3r4t", *password;
	int entry;
	employee_list *head = NULL;

	printf("please enter your password\n");
	scanf("%s", &password);
	if (strcmp(set_password, password) == 0)
	{
		head = linked_list(head);
		while (True)
		{
			printf("please enter your desired operation\n");
			printf("1 Add employee\n2 Update employee details\n");
			printf("3 Delete employee\n4 View employee details\n");
			printf("5 Reports\n6 Others\n7 Quit");
			scanf("%d", &entry);
			determinant(head, entry);
		}
	}
	else
		printf("Wrong password. Unauthorised personnel\n");
	return (EXIT_SUCCESS);
}
