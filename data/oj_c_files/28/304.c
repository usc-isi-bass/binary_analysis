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
	int n,m,i,b[111],j,p,w=0,l=0;
	char a[1111];
	gets(a);
	p=strlen(a);
	for(j=0;;j++)
	{
		b[j]=0;
		for(i=l;*(a+i)!=' '&&*(a+i)!='\0';i++)
			b[j]=b[j]+1;
	    m=i;
		w=0;
		for(i=m;*(a+i)==' ';i++)
			w=w+1;
		l=m+w;
        if(i==p) break;
	}
	n=j;
    for(j=0;j<n;j++)
		printf("%d,",b[j]);
	printf("%d",b[n]);

}
