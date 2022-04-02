#include "function.h"
#include "moviedetails.c"
#include<string.h>

struct movie_details person[300];
void reserveticket(int *arr,int price,int selection )
{
		int i,j;
		int count =0;
		int id1 = 1000;
		printf("\n                                SCREEN\n\n\n");
		for (i=1;i<=100;i++)
		{
			if (arr[i]==0)
				printf("%d\t",i);
			else
				printf("*\t",i);
			if(i%10==0)
				printf("\n\n");
		}
		printf("Please enter your name: ");
		scanf(" %19[^\n]%*[^\n]",&person[count].name);
		printf("Please enter your mobile number: ");
		scanf("%u",&person[count].mobileno);
		printf("Please select seat number you want? ");
		scanf("%d",&j);
		if (j>100||j<1)
			{
				printf("seat1 number is unavailable in this theater\n");
				printf("Please re-enter seat number: ");
				scanf("%d",&j);
			}
		if (arr[j]==1)
			{
				printf("Sorry, this ticket is already booked! Please choose another seat.\n");
				scanf("%d",&j);
			}
		else
			arr[j]=1;
		person[count].seatnumber=j;
		if (selection==1)
			show1(j,person[count].name,id1,price);
		else if (selection==2)
			show2(j,person[count].name,id1,price);
		else
			show3(j,person[count].name,id1,price);
		id1++;
}
