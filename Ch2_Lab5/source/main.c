#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	float population = 6763;
	float rate = 0.0118;
	float newpop = population;
	float newpop2 = population;
	double a , b, c;
	int year;
	printf("%15s%30s%25s\n","year from now", "Population(in millions)", "Increase(in millions)");
	a = 1 + rate;
	for (year = 1; year <= 75; year++){
		b = 1;
		for (c = 1; c <= year; c++){
			b = b*a;
		}
		newpop2 = newpop;
		newpop = population*b;
		printf("%15d%30.2f%25.2f\n", year, newpop, newpop - newpop2);
	}
	system("pause");
	return 0;
	}