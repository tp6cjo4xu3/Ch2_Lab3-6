#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int grade, aCount = 0, bCount = 0, cCount = 0, dCount = 0, fCount = 0;
	printf("enter the letter grades . \n");
	printf("enter the EOF character to end input . \n");

	while ((grade = getchar()) != EOF){
		switch (grade){
		case 'a':
		case 'A':
			++aCount;
			break;
		case 'b':
		case 'B':
			++bCount;
			break;
		case 'c':
		case 'C':
			++cCount;
			break;
		case 'd':
		case 'D':
			++dCount;
			break;
		case 'f':
		case 'F':
			++fCount;
		case '\n':
		case '\t':
		case ' ':
			break;
		default:
			printf("Incorrect letter grade entered. Enter a new grade .\n");
			break;

		}
	}
	printf("\nTotals for each letter grade are : \n");
	printf("A :%d\n", aCount);
	printf("B :%d\n", bCount);
	printf("C :%d\n", cCount);
	printf("D :%d\n", dCount);
	printf("F :%d\n", fCount);
	system("pause");
	return 0;
	}