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
	char str[300][1000];
	int i,j,k,a[10000];
	for(i=0;;i++)
	{
        scanf("%s",str[i]);
        if(getchar()=='\n') break;
    }
	for(j=0;j<=i;j++)
	{
		a[j]=strlen(str[j]);
	}
	for(k=0;k<=i;k++)
	{
        if(k==i) printf("%d\n",a[k]);
		else printf("%d,",a[k]);
	}
}