#include "function.h"
int enterchoice(void)
{
	int choice;
	printf("                Movie Ticket Booking System\n");
	printf(" ******************************\n");
	printf("             1- Admin           \n");
	printf("             2- User          \n");
	printf("             3- Exit                                  \n");
	printf("************************\n");
	printf("  Enter your choice: ");
	scanf("%d",&choice);
	return choice;
}