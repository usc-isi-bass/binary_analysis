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
	char s1[120],s2[120];
	char *p;
	int i;
	int n;
	gets(s1);
	p=s1;
	n=strlen(s1);
	for (i=0;i<n;i++)
	{
		if (i!=n-1)
		{
			s2[i]=*(p+i)+*(p+i+1);
		}
		else
		{
			s2[i]=*p+*(p+(n-1));
		}
	}
	s2[n]='\0';
	puts(s2);
	return 0;
}