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
	int i=0,n;
	char *s[100];
	s[0]=(char *)malloc(100*sizeof(char));
	while(scanf("%s",*(s+i))!=EOF)
	{
		i++;
		s[i]=(char *)malloc(100*sizeof(char));
	}
	n=i;
	for(i=0;i<n-2;i++)
	{
		if(strcmp(*(s+i),*(s+n-2))==0)
			strcpy(*(s+i),*(s+n-1));
		if(i!=n-3)
			printf("%s ",*(s+i));
		else
			printf("%s",*(s+i));
	}
}