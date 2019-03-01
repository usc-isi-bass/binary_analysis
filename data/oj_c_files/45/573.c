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
	int n,i,j,k,len1,len2;
	char a[100],b[100];
	char *q;
	char *p;
	scanf("%s %s",a,b);
	len1=strlen(a);
	len2=strlen(b);
	q=a;
	for (p=b;p<b+len2;p++)
	{
		if(*q==*p) {if (q==a+len1-1) break;q++;}
		
	}

	
		printf("%d",p-len1+1-b);

	

	
}



