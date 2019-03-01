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
	char a[200][40];
	int len[200],i=0,n;
    leap:scanf("%s",a[i]);
	len[i]=strlen(a[i]);
	i++;
	if(getchar()==' ') goto leap;
	n=i;
	for(i=0;i<n-1;i++) printf("%d,",len[i]);
	printf("%d",len[n-1]);
}