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
	char str1[31], str2[31], *p1, *p2;
	cin.getline(str1, 31);
	int flag = 0;
	for(p1 = str1, p2 = str2; *p1 != '\0'; p1++,p2++)
	{
		*p2 = *p1;
		if(*p1 - '0' < 0 || *p1 - '0' > 9)
		{
			flag++;
			if(flag >= 2)
				p2--;
		}
		else
			flag = 0;
	}
	*p2 = '\0';
	for(p2 = str2; *p2 != '\0'; p2++)
	{
		if(*p2 - '0' >= 0 && *p2 - '0' <= 9)
			cout << *p2;
		else
			cout << endl;
	}
	return 0;
}

	
