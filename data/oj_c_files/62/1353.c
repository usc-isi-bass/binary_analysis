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
	char *s;
	int i,j=0,n;
	s=(char *)malloc(1000*sizeof (char));
	gets(s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		if(s[i]!=' ')
		{
			s[j]=s[i];
			j++;
		}
		else
		{
			if(s[i+1]!=' ')
			{
				s[j]=s[i];
				j++;
			}
		}
	}
	for(i=0;i<j;i++)printf("%c",s[i]);
	printf("\n");
	free(s);
}
