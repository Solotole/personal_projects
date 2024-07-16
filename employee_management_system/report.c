#include "main.h"
/**
 * reports - function that allows for generating
 * employee list and salary reports
 * @head: pointer contaning address of the first node
 *
 * Return: return void
 */
void reports(employee_list *head)
{
	int entry, sum = 0, count = 0;
	employee_list *h = head;
	int max = h->salary, min = h->salary;
	float average;

	printf("Please enter your desired operation\n");
	printf("1 Employee list\n2 Salary report\n");
	scanf("%d", entry);
	if (entry == 1)
	else if (entry == 2)
	{
		while (h != NULL && strlen(h->ID) > 0)
		{
			sum += h->salary;
			h = h->link;
			count++;
		}
		while (h->link != NULL && strlen(h->ID) > 0)
		{
			if (h->salary < min)
				min = h->salary;
			else if (max < h->salary)
				max = h->salary;
			else
				continue;
			h = h->link;
		}
		average = sum / count;
		printf("Salary average: %f\n", average);
		printf("Minimum salary: %d\n", min);
		printf("Maximum salary: %d\n", max);
	}
	else
		printf("wrong entry\n");
}
