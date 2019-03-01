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
	int i,j;
	int m,n,k=0,t=0;
	char a[100],b[100];
	scanf("%s %s",a,b);

	m=strlen(a);
	n=strlen(b);

	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(b[i]==a[j])
			{
				k=k+1;
				a[j]='*';
				break;
			}
		}
	}

	if(k==n&&m==n) printf("YES");
	else printf("NO");
}