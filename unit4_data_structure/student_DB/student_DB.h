/*
 * student_DB.h
 *
 *  Created on: Apr 29, 2024
 *      Author: slim benhammouda
 */

#ifndef STUDENT_DB_H_
#define STUDENT_DB_H_

#include "stdio.h"
#include "stdlib.h"
#include "stdint.h"
#include "conio.h"

#define print_plus(...) 		{fflush(stdout);fflush(stdin);\
		printf(__VA_ARGS__);\
		fflush(stdout);fflush(stdin);}

// types definition.
typedef struct
{
	int ID;
	char Name[40]; // +1
	float height;
}sdata;

struct sstudent
{
	sdata Student;
	struct sstudent* p_Next;
};
// APIS prototypes

// Fill the student data
void fill_record(struct sstudent* NewStudent);

// Add a student to the list
void add_student(void);

// Delete a student from the list
int delete_student(void);

// Print all students in the list
void view_students(void);

// Delete all students in the list
void delete_all(void);

// Get a Student node form the list
void get_node(int index);

// Get the list length using iteration .
int getcount_iterative(void);

// Get the list length using recursion
int getcount_recursive(struct sstudent* head);

// Get a Student node form the end of list
void get_node_from_end(int index);

// Get the middle student the number of nodes(odd or even)
void get_middle_student(void);

// Reverse the arrangement of the list
void reverse_students(void);

// reverse the arrangement of the list using recursion
struct sstudent* reverse_recursive(struct sstudent* head);

// loop detection
void detect_loop(void);


#endif /* STUDENT_DB_H_ */
