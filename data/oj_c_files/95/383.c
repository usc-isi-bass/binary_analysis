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
	char a[80];
	char b[80];
	gets(a);
	gets(b);
	int i;
	for(i=0;a[i]||b[i];i++)
	{
		if(a[i]>='a'&&a[i]<='z')
			a[i]-='a'-'A';
		if(b[i]>='a'&&b[i]<='z')
			b[i]-='a'-'A';
		if(a[i]<b[i])
		{
			printf("<\n");
			break;
		}
		else if(a[i]>b[i])
		{
			printf(">\n");
			break;
		}
	}
	if(!a[i]&&!b[i])printf("=\n");
	return 0;
}

