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
	char *pb,*pa;
	char a[50],b[50];
	int i,j,k=0;
	 scanf("%s %s",a,b);
	 i=strlen(a); 
	 j=strlen(b);
	pa=a;
     for (pb=b;pb<b+j;pb++)
	{ k++;
		if (*pa!=*pb) continue;
		else  pa++;
		if (*pa==a[i])break;}
		printf("%d",k-i);
}
