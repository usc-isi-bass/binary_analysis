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
	char *p1,*m;
	int n,i;
	char s[1000];
	while(gets(s))
{
	n=strlen(s);
	m=&s[0];
    for(p1=s;p1<(s+n-4);p1++)
	{
		if(*p1>*m) m=p1;
	}
	for(p1=s;p1<(s+n-4);p1++)
	{
		if(p1<m) printf("%c",*p1);
		if(p1==m) printf("%c%c%c%c",*p1,s[n-3],s[n-2],s[n-1]);
		if(p1>m) printf("%c",*p1);
	}
printf("\n");
}
return 0;	
}