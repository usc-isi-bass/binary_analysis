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
	char *s[100],*a,*b;int i;
	for(i=0;;i++)
	{
		s[i]=(char *)calloc(1,100*sizeof(char));
		scanf("%s",s[i]);
		if(getchar()=='\n') break;
	}
	int n=i;
	a=(char *)calloc(1,100*sizeof(char));
	b=(char *)calloc(1,100*sizeof(char));
	scanf("%s",a);scanf("%s",b);
	for(i=0;i<=n;i++)
	{
		if(strcmp(s[i],a)==0) strcpy(s[i],b);
	}
	for(i=0;i<=n;i++)
	{
		if(i==0) printf("%s",s[i]);
		else printf(" %s",s[i]);
	}

	
}