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
	char a[256],*ps,b[256];
	int n;
	scanf("%d",&n);
    int i,k;
	for(i=0;i<n;i++)
	{
		scanf("%s",a);
		k=0;
		for(ps=a;*ps!='\0';ps++)
		{
			if(*ps=='A') {b[k]='T';}
			else if(*ps=='T') {b[k]='A';}
			else if(*ps=='C') {b[k]='G';}
			else {b[k]='C';}
			k++;
		}
		b[k]='\0';
		printf("%s\n",b);
	}
	return 0;
}