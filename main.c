#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int answer = 32;
	int num;
	int trial = 0;
	
	do
	{
		printf("input a number : ");
		scanf("%d", &num);
		
		
		
		if (num > 32)
			printf("high!\n");
		else if (num < 32)
			printf("low!\n");
			
		trial = trial + 1;
		
	}
	while (num != 32);
		
	printf("congratulation!\n trial is %d\n", trial);
	
	system ("PAUSE");
	return 0;
}
