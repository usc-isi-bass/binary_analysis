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
	char a[201];
	cin.getline(a,201);
	int n=strlen(a);
	
	char *p=a;
	int i=1;
	while(i<=n)
	{
		if(*p!=' ')
		{
		cout<<*p;
		p++;
		i++;
		}
		else 
		{
			cout<<' ';
			while(*p==' ')
			{
				p++;
				i++;
			}
		}
	}
	
	return 0;
}
