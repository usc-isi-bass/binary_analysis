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
	char a[50],b[50];
	int n,i,j,m,k,p,q;
	scanf("%s",a);
	scanf("%s",b);
	k=0;
	m=strlen(a);n=strlen(b);
	for(i=0;i<=n-m;i++)
	{
		if(a[0]==b[i])
		{
			for(j=0;j<m;j++)
			{
				if(a[j]==b[j+i])
				{
					k++;
				}
			}
			if(k==m)
				printf("%d\n",i);
		}
	}

}
	
