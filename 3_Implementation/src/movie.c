#include "function.h"
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
    
