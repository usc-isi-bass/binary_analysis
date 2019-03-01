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

int max(char a[11])
{
	int i,n,m;
	n=strlen(a);
	m=0;
	for(i=0;i<n-1;i++)
		if(a[m]<a[i+1])
			m=i+1;
		return(m);
}

void main()
{
	int i,len,m;
	char a[11],b[4];
	while (scanf("%s%s",a,b)!=EOF)
	{
		len=strlen(a);
		m=max(a);
		for(i=0;i<=m;i++)
			printf("%c",a[i]);
		for(i=0;i<3;i++)
			printf("%c",b[i]);
		for(i=m+1;i<len;i++)
			printf("%c",a[i]);
        printf("\n");
	}
	
}

