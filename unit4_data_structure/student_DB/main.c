/*
 * main.c
 *
 *  Created on: Apr 29, 2024
 *      Author: slim benhammouda
 */

#include "student_DB.h"

extern struct sstudent* gp_FirstStudent;
int main(void)
{
	struct sstudent* p_student = NULL ;
	char temp_text[40];

	print_plus("\n 			<<===========This is a students data base============>>\n ");
	while(1)
	{
		print_plus("\n Choose on of the following options \n");
		print_plus("\n\t 1: Add Student");
		print_plus("\n\t 2: Delete Student");
		print_plus("\n\t 3: View Students");
		print_plus("\n\t 4: Delete All");
		print_plus("\n\t 5: Get Node");
		print_plus("\n\t 6: Get Students counter by Iteration");
		print_plus("\n\t 7: Get Students counter by Recursion");
		print_plus("\n\t 8: Get Node from the end");
		print_plus("\n\t 9: Get Middle student");
		print_plus("\n\t 10: Reverse students classic");
		print_plus("\n\t 11: Reverse students recursive");
		print_plus("\n\t 12: Loop detection");
		print_plus("\n\n Enter option number: ");

		gets(temp_text);
		print_plus("\n ====================================== \n");
		switch(atoi(temp_text))
		{
		case 1:
			add_student();
			break;

		case 2:
			delete_student();
			print_plus("\n<---Student successfully deleted--->");
			break;

		case 3:
			view_students();
			break;

		case 4:
			delete_all();
			print_plus("\n<---Now the list is empty--->");
			break;

		case 5:
			print_plus("Enter Node number: ");
			gets(temp_text);
			get_node(atoi(temp_text));
			break;

		case 6:
			print_plus("The number of students  = %d\n", getcount_iterative());
			break;

		case 7:
			p_student = gp_FirstStudent ;
			print_plus("The number of students  = %d\n", getcount_recursive(p_student));
			break;

		case 8:
			print_plus("Enter Node number from the end : ");
			gets(temp_text);
			get_node_from_end(atoi(temp_text));
			break;

		case 9:
			get_middle_student();
			break;

		case 10:
			reverse_students();
			print_plus("\n<---Reversing is done--->");
			break;

		case 11:
			if(!gp_FirstStudent)
			{
				print_plus("The list is empty");
			}
			else
			{
				p_student = gp_FirstStudent;
				gp_FirstStudent = reverse_recursive(p_student);
				print_plus("\n<---Reversing is done--->");
			}
			break;

		case 12:
			detect_loop();
			break;

		default:
			print_plus("\n Wrong Option Please Try Again \n\n");
			break;
		}
		print_plus("\n ====================================== \n");

	}
	return 0;
}

