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
	char a[101],b[101],r[100][101];
	int i,j,k,n,c,la,lb;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %s",a,b);
		la=strlen(a);
		lb=strlen(b);
		c=la-lb;
		r[i][la]='\0';
		for(j=la-1;j>=0;j--)
		{
			if(j>=la-lb)
			{
				if(a[j]>=b[j-c])
					r[i][j]=a[j]-b[j-c]+'0';
				else
				{
					r[i][j]=10+a[j]-b[j-c]+'0';
					k=j-1;
					while(a[k]=='0')
					{
						a[k]='9';
						k--;
					}
					a[k]--;
				}
			}
			else r[i][j]=a[j];
		}
	}
	for(i=0;i<n;i++)
			printf("%s\n",r[i]);
}