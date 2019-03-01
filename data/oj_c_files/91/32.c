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
	int i,len;
	char a[101];
	char b[101]={'\0'};
	char *pa,*pb;

	gets(a);
	len=strlen(a);
	for(pa=a,pb=b;pa<a+len-1;pa++,pb++)
	{
		*pb=*pa+*(pa+1);
	}
	*pb=*pa+*a;
	printf("%s\n",b);	
	return 0;
}
