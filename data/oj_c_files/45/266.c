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
	char a[20],b[20];
	int i,j,k=0,m,n;
	scanf("%s%s",a,b);
	m=strlen(a);
	n=strlen(b);
	for(i=0;i<=n-m;i++)
	{
		if(b[i]==a[0])
		{
			for(j=i+1;j<i+m;j++)
			{
				if(a[j-i]==b[j])
					k++;
			}
		}
		if (k==m-1)
		{
			printf("%d\n",i);
			break;
		}
		else
			k=0;
	}
}