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
	char a[50],b[50],c[50]={0};
	scanf("%s",a);
	scanf("%s",b);
	int i,j,k=0,q=0;int m=strlen(a);int n=strlen(b);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(b[j+i]==a[j])
				c[i]=c[i]+1;
		}
	}
	for(i=0;i<n;i++)
		if(c[i]==m)
		{
			printf("%d\n",i);
			break;
		}
}