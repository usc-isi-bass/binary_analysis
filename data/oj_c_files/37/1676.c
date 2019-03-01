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


void find(char c[])
{
	int i,a[26]={0};
	for (i=0;c[i];i++)
		a[c[i]-'a']++;
	for (i=0;c[i];i++)
		if (a[c[i]-'a']==1)
		{
			printf ("%c\n",c[i]);
			return;
		}
	printf ("no\n");
}

main()
{
	int t,i;
	char c[100000];
	scanf ("%d\n",&t);
	for (i=0;i<t;i++)
	{
		gets (c);
		find (c);
	}
}