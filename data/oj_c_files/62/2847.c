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

void main()
{
	char s[2000],a[2000];
	int i,k,n,b;
	gets(s);
	n=strlen(s);
	k=0;
	i=0;
	while(i<n)
	{
		if(s[i]!=' ')
		{
			b=0;
			a[k]=s[i];
			k++;
		}
		else if (b<1)
		{
			a[k]=s[i];
			k++;
			b++;
		}
		i++;
	}
	a[k]='\0';
	printf("%s",a);
}