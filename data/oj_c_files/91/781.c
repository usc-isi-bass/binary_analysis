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
	s=(char*)malloc(10000*sizeof(char));
	int i,n,m;
	gets(s);
	n=strlen(s);
	for(i=0;i<n-1;i++)
	{
		m=(int)(*(s+i))+(int)(*(s+i+1));
		printf("%c",m);
	}
	m=(int)(*(s+n-1))+(int)(*(s+0));
	printf("%c",m);
}

