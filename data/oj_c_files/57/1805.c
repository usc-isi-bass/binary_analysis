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
	int n,i,b;
	char a[100];
	scanf("%d",&n);
	for( i = 0; i < n; i++)
	{
		scanf("%s", a);
		char *p;
		b=strlen(a);
		p=&a[b-2];
		if(strcmp(p,"er")==0||strcmp(p,"ly")==0)
			a[b-2]=0;
	
		p=&a[b-3];
		if(strcmp(p,"ing")==0)
			a[b-3]=0;
		printf("%s\n",a);
	}
	return 0;
}


