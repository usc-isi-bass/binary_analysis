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
	int l,i,j=1;
	char a[100],b[100];
	gets(a);
    l=strlen(a);
	b[0]=a[0];
	for(i=1;i<l;i++)
	{
		if(a[i-1]==' ' && a[i]==' ')
			continue;
        b[j]=a[i];
		j++;
	}
	for(i=0;i<j;i++)
		printf("%c",b[i]);
	printf("\n");
	return 0;
}