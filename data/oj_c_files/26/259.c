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

//* * * * * * * * * * * * * * * * * * * * * * * * 
//*???????????                       *
//*??????????? .cpp                  *
//*?????  1000012839                       *
//*???2010.12.09                             *
//* * * * * * * * * * * * * * * * * * * * * * * * 


int main()
{
	char str[101];
	char *p[100] = {NULL};
	int i, j, flag = 1;

	gets(str); 
	for (i = 0, j = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			p[j] = &str[i];
			flag = 0;
			j++;
		}
		if (flag == 0 && str[i] == ' ')
		{
			p[j] = &str[i];
			flag = 1;
			j++;
		}
		
	}
	for (i = 0; i < j; i++)
		cout << *p[i];
	cout << endl;
	return 0;
}


		

