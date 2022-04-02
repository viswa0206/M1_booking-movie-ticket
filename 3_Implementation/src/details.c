#include "function.h"
#include "moviedetails.c"
#include<string.h>

struct movie_details person[300];
void details(void)
{
	int j;
	int count =0;
	char passcode[10],pak[10]="admin";
	printf("Enter the passcode to see details: ");
	scanf("%s",&passcode);
	if (strcmp(passcode,pak)==0)
	{
		for (j=0;j<count;j++)
		{
			printf("seat no: %d is booked by %s booking id is %d\n",person[j].seatnumber,person[j].name,person[j].id);
		}
	}
	else
		printf("Entered passcode is wrong \n");
		system("PAUSE");
		system("CLS");
}