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

int main()
{
 	int i;
	char c1[80], c2[80];
	cin.getline(c1,80);
	cin.getline(c2,80);
	i = 0;
	while (c1[i] != '\0')
	{
		if (c1[i] >= 65 && c1[i] <= 90)
			c1[i] += 32;
			i++;
	}
	i = 0;
	while (c2[i] != '\0')
	{
		if (c2[i] >= 65 && c2[i] <= 90)
			c2[i] += 32;
			i++;
	}
		if ( strcmp(c1 , c2) > 0)
		cout << ">";
	if ( strcmp(c1 , c2) < 0)
		cout << "<";
	if ( strcmp(c1 , c2) == 0)
		cout << "=";	


	
	
	return 0;
}
	
