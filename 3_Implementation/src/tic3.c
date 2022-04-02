#include "function.h"
#include "moviedetails.c"
#include<string.h>

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
        printf("\t                                              Time      : 6:30pm\n");
        printf("\t                                              Screen     : 04\n");
        printf("\t                                              seats No. : %d  \n",choice);
        printf("\t                                              price . : %d  \n\n",price);
        person[count].id=id1;
        printf("\t Thanks For Booking \n");
        return;
}
