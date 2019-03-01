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

char a[10000];

int main()
{
	cin.getline(a,10000);
	char *p,*q=a;
	for(p=a;p<=a+strlen(a);)
	{
		if (*p>='0' && *p<='9')
		{
			p++;
		}
		else
		{
			for(;q<p;q++)
			{
				cout<<*q;
			}
			cout<<endl;
			while( p<=a+strlen(a) && (*p<'0' || *p>'9') ) p++;
			q=p;
		}
	}
	return 0;
}
 