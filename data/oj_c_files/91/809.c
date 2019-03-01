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
	char org[200];
	char *p;
	p=org;
	int i,m,n;
	gets(org);
	n=strlen(org);
	for(i=0;i<n-1;i++)
	{
		
		m=*(p+i)+*(p+1+i);
		printf("%c",m);
	}
	m=*(p+i)+*p;
	printf("%c",m);
}
	

