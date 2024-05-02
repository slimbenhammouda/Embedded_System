/*
 * student_DB.c
 *
 *  Created on: Apr 29, 2024
 *      Author:slim benhammouda
 */


#include "student_DB.h"

struct sstudent* gp_FirstStudent=NULL;

// Fill the student data
void fill_record(struct sstudent *NewStudent)
{
	char temp_text[40];

	print_plus("Enter Student ID: ");
	gets(temp_text);
	NewStudent->Student.ID = atoi(temp_text);


	print_plus("Enter Student Name: ");
	gets(NewStudent->Student.Name);

	print_plus("Enter Student Height: ");
	gets(temp_text);
	NewStudent->Student.height = atof(temp_text);
}
// Add a student to the list
void add_student(void)
{
	struct sstudent *pNewStudent ;
	struct sstudent *pLastStudent ;

	if (gp_FirstStudent == NULL)// If the list is empty
	{
		// Create the first record
		pNewStudent = (struct sstudent*) malloc(sizeof(struct sstudent));

		// Check for invalid allocation
		if(pNewStudent == NULL)
		{
			printf("Can't create new student !!!\n");
		}

		// Assign the gp_FirstStudent to it
		gp_FirstStudent = pNewStudent;
	}
	else // If the list contain records.
	{
		// Navigate until reach to the last record
		pLastStudent = gp_FirstStudent;
		while(pLastStudent->p_Next)
		{
			pLastStudent = pLastStudent->p_Next;
		}
		// Create new record
		pNewStudent = (struct sstudent*) malloc(sizeof(struct sstudent));
		// Assign its next to it
		pLastStudent->p_Next = pNewStudent;
	}
	// Fill the record
	fill_record(pNewStudent);
	// Assign its next to null
	pNewStudent->p_Next = NULL;
}

// Delete a student from the list
int delete_student(void)
{
	char temp_text[40];
	unsigned int selected_id;

	// Get the selected ID from the user
	print_plus("\nEnter Student ID to be deleted: ");
	gets(temp_text);
	selected_id = atoi(temp_text);

	if(gp_FirstStudent) // List have records
	{
		struct sstudent *pSelectedStudent = gp_FirstStudent;
		struct sstudent *pPreviousStudent = NULL ;

		// Loop on all records starting from the gp_FirstStudent
		while(pSelectedStudent)
		{
			// Compare the recorded ID with the selected ID
			if(pSelectedStudent->Student.ID == selected_id)
			{
				if(pPreviousStudent)
				{
					pPreviousStudent->p_Next = pSelectedStudent->p_Next;
				}
				else
				{
					gp_FirstStudent = pSelectedStudent->p_Next;
				}
				free(pSelectedStudent);
				print_plus("\nThe ID selected is deleted. \n");
				return 1; // find it
			}
			// Store the previous record pointer
			pPreviousStudent = pSelectedStudent;
			pSelectedStudent = pSelectedStudent->p_Next;

		}
	}
	print_plus("\n\tThe selected ID is not found. \n");
	return 0; // cannot Find it
}

// Print all students in the list
void view_students(void)
{
	struct sstudent *pCurrentStudent = gp_FirstStudent;
	unsigned int counter = 0;

	if(gp_FirstStudent == NULL)
	{
		print_plus("\n List is empty. \n");
	}
	while(pCurrentStudent)
	{
		print_plus("\n Record Number %d",counter+1);
		print_plus("\n\t ID : %d",pCurrentStudent->Student.ID);
		print_plus("\n\t Name : %s",pCurrentStudent->Student.Name);
		print_plus("\n\t Height : %0.2f\n",pCurrentStudent->Student.height);
		pCurrentStudent = pCurrentStudent->p_Next;
		counter++;
	}
}

// Delete all students in the list
void delete_all(void)
{
	struct sstudent*pCurrentStudent = gp_FirstStudent;

	if(gp_FirstStudent == NULL)
	{
		print_plus("\n List is empty");
	}
	while(pCurrentStudent)
	{
		struct sstudent *pTempStudent = gp_FirstStudent;
		pCurrentStudent = pCurrentStudent->p_Next;
		free(pTempStudent);
	}
	gp_FirstStudent = NULL;
}

// Get a Student node form the list
void get_node(int index)
{
	// Check if the list is empty
	if(gp_FirstStudent == NULL || index < 0)
	{
		print_plus("\nThe List is Empty.\n");
	}

	struct sstudent *p_Temp = gp_FirstStudent;
	unsigned int count = 0;

	// Check if the first recored is null
	while(p_Temp)
	{
		if(count == index)
		{
			print_plus("\n Record Index %d",index);
			print_plus("\n\t ID     : %d",p_Temp->Student.ID);
			print_plus("\n\t Name   : %s",p_Temp->Student.Name);
			print_plus("\n\t Height : %0.2f\n",p_Temp->Student.height);
		}
		p_Temp = p_Temp->p_Next;
		count++;
	}
}

// Get the list length using iteration
int getcount_iterative(void)
{
	// Check if the list is empty
	if(gp_FirstStudent == NULL )
	{
		print_plus("\nThe List is Empty.\n");
		return 0;
	}

	struct sstudent *p_Temp = gp_FirstStudent;
	unsigned int count = 0;

	// Loop
	while(p_Temp)
	{
		p_Temp = p_Temp->p_Next;
		count++;
	}
	return count;
}

// Get the list length using recursion
int getcount_recursive(struct sstudent* head)
{
	if(!gp_FirstStudent)
	{
		print_plus("\nThe list is empty \n");
		return 0 ;
	}
	// exit condition for the recursion.
	if(head==NULL)
		return 0 ;

	return 1+getcount_recursive(head->p_Next);
}

// Get a Student node form the end of list
void get_node_from_end(int index)
{
	// Check if the list is empty
	if(gp_FirstStudent == NULL || index < 0)
	{
		print_plus("\nThe List is Empty.\n");
	}

	// Initialize main and Reference pointer to the beginning of the list
	struct sstudent *p_Main = gp_FirstStudent;
	struct sstudent *p_Ref = gp_FirstStudent;
	int i;
	// Move reference pointer by the desired offset from main pointer
	for(i=index;i>0;i--)
	{
		if(p_Ref==NULL)
		{
			print_plus("\n cannot find the index from the end");
			return;
		}
		p_Ref=p_Ref->p_Next;
	}
	// Move main and reference pointers simultaneously until ref pointer reach the null.
	while(p_Ref->p_Next != NULL)
	{
		p_Main = p_Main->p_Next;
		p_Ref = p_Ref->p_Next;
	}

	print_plus("\n Record Index from end zero-based");
	print_plus("\n\t ID : %d",p_Main->Student.ID);
	print_plus("\n\t Name : %s",p_Main->Student.Name);
	print_plus("\n\t Height : %0.2f\n",p_Main->Student.height);
}

// Get the middle student
void get_middle_student(void)
{
	// Check if the list is empty
	if(gp_FirstStudent == NULL)
	{
		print_plus("\nThe List is Empty.\n");
		return ;
	}
	struct sstudent* p_slow = gp_FirstStudent;
	struct sstudent* p_fast = gp_FirstStudent;

	while(p_fast)
	{
		if(p_fast->p_Next==NULL)
			break;
		p_slow = p_slow->p_Next;
		p_fast = p_fast->p_Next->p_Next;
	}
	print_plus("\n the middle record is : \n");
	print_plus("\n\t ID : %d",p_slow->Student.ID);
	print_plus("\n\t Name : %s",p_slow->Student.Name);
	print_plus("\n\t Height : %0.2f\n",p_slow->Student.height);

}

// Reverse the arrangement of the list
void reverse_students(void)
{
	// Initialize node for previous, current and next
	struct sstudent *p_PreviousStudent = NULL;
	struct sstudent *p_CurrentStudent = gp_FirstStudent;
	struct sstudent *p_NextStudent = NULL;

	// Check if the list is empty
	if(gp_FirstStudent == NULL)
	{
		print_plus("\nThe List is Empty.\n");
		return;
	}

	// if p_CurrentStudent get the last node in the list
	while(p_CurrentStudent != NULL)
	{
		p_NextStudent = p_CurrentStudent->p_Next;
		p_CurrentStudent->p_Next = p_PreviousStudent;
		p_PreviousStudent = p_CurrentStudent;
		p_CurrentStudent = p_NextStudent;
	}

	// get the new head .
	gp_FirstStudent = p_PreviousStudent;
}

// reverse the arrangement of the list using recursion
struct sstudent* reverse_recursive(struct sstudent* head)
{
	// Exit condition for the recursion .
	if(head == NULL || head->p_Next == NULL)
		return head ;

	struct sstudent* new = reverse_recursive(head->p_Next);
	struct sstudent* next = head->p_Next ;
	next->p_Next = head ;
	head->p_Next = NULL ;
	return new ;
}

// loop detection
void detect_loop(void)
{
	// Check if the list is empty
	if(gp_FirstStudent == NULL)
	{
		print_plus("\nThe List is Empty.\n");
		return ;
	}
	struct sstudent* p_slow = gp_FirstStudent ;
	struct sstudent* p_fast = gp_FirstStudent ;
	while(p_fast)
	{
		p_fast = p_fast->p_Next->p_Next;
		p_slow = p_slow->p_Next;
		if(p_slow == p_fast)
		{
			print_plus("\nThere is a loop detected");
			return ;
		}
		if(p_fast->p_Next == NULL)
		{
			print_plus("\nNo loop detected");
			return ;
		}
	}
}

