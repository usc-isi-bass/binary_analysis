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
	char s1[80],s2[80];
	int i;
	gets(s1);
	gets(s2);
	for (i=0;s1[i]!='\0';i++)
	{
		if (s1[i]<='z'&&s1[i]>='a')
		{
	       s1[i]=s1[i]-32;
		}
	}
	for (i=0;s2[i]!='\0';i++)
	{
		if (s2[i]<='z'&&s2[i]>='a')
		{
			s2[i]=s2[i]-32;
		}
	}
	i=strcmp(s1,s2);
	if (i==0)
		printf ("=");
	else if (i<0)
		printf ("<");
	else if (i>0)
		printf (">");
	return 0;
}

