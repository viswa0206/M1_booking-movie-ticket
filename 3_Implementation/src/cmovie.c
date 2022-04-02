#include "function.h"

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