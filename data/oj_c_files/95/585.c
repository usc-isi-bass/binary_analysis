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
	char a[80],b[80],i;
	int m,n;
	gets(a);
	m=strlen(a);
	for(i=0;i<m;i++)
		if(a[i]>=65 && a[i]<=90) a[i]=a[i]+32;
	gets(b);
	n=strlen(b);
		for(i=0;i<n;i++)
			if(b[i]>=65 && b[i]<=90) b[i]=b[i]+32;
	if(strcmp(a,b)>0) printf(">");
	if(strcmp(a,b)<0) printf("<");
	if(strcmp(a,b)==0) printf("=");

}