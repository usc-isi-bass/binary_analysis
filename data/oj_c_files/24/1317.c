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
	int m=0,n=10000,l;
	char *max,*min,*s,b;
	max=(char *)malloc(100*sizeof(char));
	min=(char *)malloc(100*sizeof(char));
	s=(char *)malloc(100*sizeof(char));
	for (;;)
	{
		scanf("%s",s);
		l=strlen(s);
		if (l<n) 
		{
			strcpy(min,s);
			n=l;
		}
		if (l>m) 
		{
			strcpy(max,s);
			m=l;
		}
		b=getchar();
		if (b!=' ') break;
	}
	printf("%s\n%s\n",max,min);
}