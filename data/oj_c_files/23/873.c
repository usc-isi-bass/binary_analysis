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
	int n,i,j,k=0;
	char a[101],*p;
	gets(a);
	n=strlen(a);
	for(p=a+n-1,i=0;i<n;i++,p--)
	    if(*p==' ') 
		{
			for(j=1;j<=k;j++)
				printf("%c",*(p+j));
		    k=0;
			printf(" ");
		}
		else
		{
			k++;
			if(p==a)
				for(j=0;j<k;j++)
				printf("%c",*(p+j));
		}
}