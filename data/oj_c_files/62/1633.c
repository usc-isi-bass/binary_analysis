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
	int i,n;
	char a[100];
	cin.getline(a,100);
	n=strlen(a);
	char *p;
	p=a;
	for(i=1;i<=n;i++)
	{
		if((*p==' ')&&(*(p+1)==' '))
		{
			p=p+1;
			continue;
		}
		cout<<*p;
		p=p+1;
	}
	return 0;
}