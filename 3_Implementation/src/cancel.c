#include "function.h"
#include "moviedetails.c"
#include<string.h>

struct movie_details person[300];
void cancelticket(int *arr)
{
      int Aseat,j,stop;
	  printf("Please enter Booking ID number: ");
	  scanf("%d",&Aseat);
	  for (j=0;j<300;j++)
	  {
	  		if(Aseat==person[j].id)
	  		{
					 stop=5;
					 system("cls");
					 printf("%s your ticket is %d cancelled",person[j].name,person[j].seatnumber);
					 arr[person[j].seatnumber]=0;
					 j=300;
	  		}
	  }
	  if (stop!=5)
	  		printf("Booking ID number is incorrect please enter right one to cancel ticket: \n");
}