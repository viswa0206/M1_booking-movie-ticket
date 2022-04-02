/**
 * @file function.h
 * @author Goutami D Honagannavar (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-09-05
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __FUNCTION_H__
#define __FUNCTION_H__
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "math.h"
#include "assert.h"
#include "../src/moviedetails.c"
#include<string.h>

#ifndef __FUNCTION_H__
#define __FUNCTION_H__
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "math.h"
#include "assert.h"





       





#endif /* #define _FUNCTION_H__ */


/**
 * @brief login withrespective to customer or admin
 */


int enterchoice(void);
int enterchoice(void)
{
	int choice;
	printf("                 Movie Ticket Booking System\n");
	printf(" *******************************\n");
	printf("             1- Admin           \n");
	printf("             2- User          \n");
	printf("             3- Exit                                   \n");
	printf("************************\n");
	printf("  Enter your choice: ");
	scanf("%d",&choice);
	return choice;
}
/**
 * @brief login for admin
 * 
 */
void details(void);
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
/**
 * @brief Displays the movie available to purchase a ticket
 */

int ListofMovies(void);
int ListofMovies(void)

{
	int j;
	system("cls");
	printf("\t\t\tMovie Name?\n");
	printf("\t\t\t----------------------------\n\n");
	printf("\t\t\tpress 1 for Narnia\n\n");
	printf("\t\t\tpress 2 for Lord of the Rings\n\n");
	printf("\t\t\tpress 3 for Avengers\n");
	scanf("%d",&j);
	return j;
}
int movieselect(void);
int movieselect(void)
{
	int j;
	printf("\t\t\tMovie title\n");
	printf("\t\t\t-------------------------------------\n");
	printf("\t\t\tpress 1 for Narnia\n\n");
	printf("\t\t\tpress 2 for Lord of the Rings\n\n");
	printf("\t\t\tpress 3 for Avengers\n");
	scanf("%d",&j);
	return j;
}

/**
 * @brief admin can change prize of ticket after login with the appropriate login credentials .
 * 
 */
int changepriceticket(int);
int changepriceticket(int price)
{
	char passcode[10],pak[10]="admin";
	printf("Enter the passcode to change price of ticket: ");
	scanf("%s",&passcode);
	if (strcmp(passcode,pak)==0)
	{
		printf("Please enter new price: ");
		scanf("%d",&price);
		printf("Price Updated Successfully: ");
		system("PAUSE");
		system("CLS");
	}
	else
		printf("The entered passcode is wrong! ");
	return price;
}

/**
 * @brief Customer can purchase a ticket 
 */

void show1(int choice,char name[10],int id1,int price);
struct movie_details person[300];
void show1(int choice,char name[10],int id1,int price)
{
        int count = 0;
		system("cls");
		printf("\n\n");
        //printf("\t-----------------THEATER BOOKING TICKET----------------\n");
        printf("\t******************\n");
        printf("\t Booking ID : %d \t\t\tShow Name : Narnia\n",id1);
        printf("\t Customer  : %s\n",name);
        printf("\t\t\t                              Date      : 31-04-2022\n");
        printf("\t                                              Time      : 01:00pm\n");
        printf("\t                                              Screen      : 03\n");
        printf("\t                                              seats No. : %d  \n",choice);
        printf("\t                                              price . : %d  \n\n",price);
		person[count].id=id1;
        printf("\t Thanks For Booking \n");
        return;
}
/**
 * @brief Customer can purchase a ticket 
 */
void show2(int choice,char name[10],int id1,int price);
struct movie_details person[300];
void show2(int choice,char name[10],int id1,int price)
{
        int count =0;
		system("cls");
		printf("\n\n");
       
        printf("\t============================================================\n");
        printf("\t Booking ID : %d \t\t\tShow Name :Lord of the Rings\n",id1);
        printf("\t Customer  : %s\n",name);
        printf("\t\t\t                                Date      : 02-05-2022\n");
        printf("\t                                              Time      : 11:00am\n");
        printf("\t                                              Screen      : 01\n");
        printf("\t                                              seats No. : %d  \n",choice);
        printf("\t                                              price . : %d  \n\n",price);
        person[count].id=id1;
       printf("\t Thanks For Booking \n");
        return;
}
/**
 * @brief Customer can purchase a ticket 
 */
void show3(int choice,char name[10],int id1,int price);
struct movie_details person[300];
void show3(int choice,char name[10],int id1,int price)
{ 
        int count = 0;
		system("cls");
		printf("\n\n");
        //printf("\t-----------------THEATER BOOKING TICKET----------------\n");
        printf("\t*********************\n");
        printf("\t Booking ID : %d \t\t\tShow Name : Avengers \n",id1);
        printf("\t Customer  : %s\n",name);
        printf("\t\t\t                              Date      : 10-05-2022\n");
        printf("\t                                              Time      : 06:30pm\n");
        printf("\t                                              Screen     : 04\n");
        printf("\t                                              seats No. : %d  \n",choice);
        printf("\t                                              price . : %d  \n\n",price);
        person[count].id=id1;
        printf("\t Thanks For Bookingm\n");
        return;
}

/**
 * @brief A customer can reserve the ticket
 */
void reserveticket(int *,int,int );
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


/**
 * @brief A customer can cancel the ticket  
 */
void cancelticket(int *); 
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


#endif /* #define _FUNCTION_H__ */