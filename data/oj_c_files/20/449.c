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
	char *p,s[10],subs[4];
	while(scanf("%s %s",s,subs)!=EOF)
	{	
	int n,i;
	n=strlen(s);
	p=&s[0];
	for(i=1;i<n;i++)
		if(s[i]>*p)
			p=&s[i];
	for(i=0;i<n;i++)
	{
		printf("%c",s[i]);
		if(&s[i]==p)
			printf("%s",subs);
	}
	printf("\n");
	}
}
