#include<stdio.h>
#include<stdlib.h>
//#include"moviedetails.c"
#include"inc/function.h"
#include<string.h>
#include "unity/unity.h"

int main()
{
    int count = 0;
	int **seatnumber,choice,price=500,selection,i;
	seatnumber=(int **)calloc(101,sizeof(int *));
	for (i=0;i<3;i++)
		*(seatnumber+i)=(int *)calloc(101,sizeof(int ));
	int a;
	char passcode[10],pak[10]="user";
while(a!=3)
	{
        x:choice=enterchoice();
		switch(choice)
		{
		    int b;
		    int cha;
			case 1:
			    y:printf(" 1- edit ticket price :   \n");
                printf(" 2- view reserved tickets:   \n");
                printf(" 3- Exit:        \n");
	            scanf("%d", &cha);
	            switch(cha){
            case 1:
                price=changepriceticket(price);
                goto y;
				break;
            case 2:
                details();
                goto y;
				break;
            case 3:
                b=3;
                goto x;
                break;
             default:
				printf("Choice not available\n");
				break;
	            }

	        case 2:
                z:
                printf(" User login: \n");
                printf("        1- To buy ticket:        \n");
                printf("        2- To cancel ticket:       \n");
                printf("        3- Exit        \n");
                scanf("%d",&cha);
                switch(cha){


                case 1:
                    printf("Enter the passcode to book the ticket: ");
                    scanf("%s",&passcode);
                    if (strcmp(passcode,pak)==0){
                        selection=ListofMovies();
                        reserveticket(seatnumber[selection-1],price,selection);
                        count++;
                    }
                    else
                        printf("passcode wrong!\n");
                    goto z;
                    break;
                case 2:
                    printf("Enter the passcode to book the ticket: ");
                    scanf("%s",&passcode);
                    if (strcmp(passcode,pak)==0){
                        selection=movieselect();
                        cancelticket(seatnumber[selection-1]);
                    }
                    else
                    printf("passcode wrong!\n");
                    goto z;
                    break;
				case 3:
                goto x;
                break;
             default:
				printf("Choice not available\n");
				break;
				    }



			case 3:
				a=3;
				break;
			default:
				printf("Choice not available\n");
				break;
		}
	}
}