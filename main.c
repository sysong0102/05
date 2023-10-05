#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a;
	printf("input an integer : ");
	scanf("%d", &a);
	
	if (a < 0)
		a = -a;
		
	printf("The absolute value is %d\n", a);
	
	system ("PAUSE");
	return 0;
}
