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

/*          ???????
??????        2010.12.12       */
int main()
{
	int count = 0;
	char a[1000] = {'\0'};
	char b[1000] = {'\0'};//b???????
	char *p = NULL;
	cin.getline(a,sizeof(a));//?????
	for(p = a; p < a + strlen(a); p++)
		if(*p != ' ')
		{
			*(b + count) = *p;
			count++;//???????????
		}
		else
			if(*(p - 1) != ' ')
			{
				*(b + count) = *p;
				count++;//????????
			}
	cout << b << endl;
	return 0;
}
