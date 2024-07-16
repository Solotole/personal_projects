#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdbool.h>

#define BUFF_SIZE 20

/**
 * struct structure - structure of the nodes
 * @ID: employee identification number
 * @name: employee name
 * @position: employee position
 * @department: employee department
 * @gender: employee gender
 * @salary: employee salary
 * @link: link to the next node
 *
 * Description: this is the structure that holds employee
 * details in the organization. with this the operations
 * an individual demands are easily met
 */
typedef struct structure
{
	char *ID;
	char *name;
	char *position;
	char *department;
	char gender;
	int salary;
	struct structure *link;
}employee_list;

void adding(employee_list *head, int entry);
void department(employee_list *head);
void gender(employee_list *head);
void add_employee(employee_list **head);
void update_employee_details(employee_list **head);
void delete_employee(employee_list **head);
void view_employee_details(employee_list *head);
void others(employee_list *head);
void reports(employee_list *head);
employee_list *linked_list(employee_list *head);
void determinant(employee_list *head, int entry;

#endif/*ending main.h*/
