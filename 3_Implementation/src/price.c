#include "function.h"
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