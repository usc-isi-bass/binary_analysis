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



int main ()
{
	int i=0;

	char a[201],b[201];

	cin.getline (a,200);

	char *p;

	for (p=a;*p!='\0';p++)
	{
		if (*p!=' ')
		{
			b[i]=*p;
			i++;
		}
		if (*p==' ')
		{
			b[i]=' ';
			i++;
			for (;*p!='\0';p++)
			{
				if (*p!=' ')
				{
					b[i]=*p;
					i++;
					break;
				}
			}
		}
	}
	b[i]='\0';
	cout <<b<<endl;

	return 0;
}