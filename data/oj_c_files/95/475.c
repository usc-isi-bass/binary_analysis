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
	char c[100],d[100];
	gets(c);

	gets(d);
	int n,i,m1,m2;
	m1=0;
	m2=0;
	n=strlen(c);
	for(i=0;i<n;i++)
	{
		if(c[i]>='A'&&c[i]<='Z')
			c[i]=c[i]+32;
		m1=m1+c[i];
		if(d[i]>='A'&&d[i]<='Z')
			d[i]=d[i]+32;
		m2=m2+d[i];
	}
	if(m1==m2)
		printf("=\n");
	if(m1>m2)
		printf(">\n");
	if(m1<m2)
		printf("<\n");
	return 0;
}


