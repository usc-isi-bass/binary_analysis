#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


static int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 

static int isleapyear(int year) { 
	return (year % 4 == 0 && year % 100 !=0 ) || year % 400 == 0; 
} 

int main() { 
	int year, month, day;
	int n = 0;  // to store the result. 
	int i;

	scanf("%d %d %d", &year, &month, &day);

	// add days of former months. 
	for (i = 1; i < month; i++)
		n = n + days[i];
	// add days of this month. 
	n = n + day;
	// check leap year 
	if (month > 2 && isleapyear(year))
		n++; 
	
	printf("%d\n", n); 
	return 0;
}