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
	char *p,a[100];
	int n,l;
	scanf("%d",&n);
	for(int j=0;j<n;j++)
	{
	scanf("%s",a);
		p=a;
		l=strlen(a);
		if(strcmp("er",(p+l-2))==0){*(p+l-2)='\0';puts(p);}
		if(strcmp("ly",(p+l-2))==0){*(p+l-2)='\0';puts(p);}
		if(strcmp("ing",(p+l-3))==0){*(p+l-3)='\0';puts(p);}
	}

	return 0;
}

