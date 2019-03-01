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
//*????????                             *
//*????????.cpp                         *
//*?????  1000012839                       *
//*???2010.12.09                             *
//* * * * * * * * * * * * * * * * * * * * * * * * 


int main()
{
	char str[31];	//	?????str?
	int i, j;	//	??????i,j?
	char *p = NULL;	//	?????

	cin.getline(str, 31);
	p = str;	//	????????????
	i = 0;
	while (str[i] != '\0')
		i++;	//	??i?????????
	for (j = 0; j < i; j++)
	{
		if (*p >= '0' && *p <= '9')
		{
			cout << *p;	//	???????
			if (*(p + 1) < '0' || *(p + 1) > '9')
				cout << endl;	//	?????????????????
		}
		p++;	//	???????
	}
	return 0;
}
		

