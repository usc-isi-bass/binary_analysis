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
	char a[101],c;
	int l,sp=0,i,j=1,b[100];
	gets(a);
	l=strlen(a);
	c=a[0];
	b[0]=0;
	for(i=1;i<l-1;i++)
		if(a[i]==c)
			b[j++]=i;
		else printf("%d %d\n",b[--j],i);
	printf("0 %d",l-1);

	return 0;
}

