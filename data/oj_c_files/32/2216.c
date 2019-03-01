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
	int n,m,i,j,la,lb;
	char a[101],b[101],c[101],r[100][101];
	scanf("%d",&n);
	for(m=0;m<n;m++)
	{
		scanf("%s %s",a,b);
		la=strlen(a);
		lb=strlen(b);
		for(i=0;i<la-lb;i++)
			c[i]='0';
		c[i]=0;
		strcat(c,b);
		r[m][la]=0;
		for(i=la-1;i>=0;i--)
		{
			if(a[i]>=c[i]) r[m][i]=a[i]-c[i]+'0';
			else
			{
				r[m][i]=a[i]+10-c[i]+'0';
				for(j=i-1;;j--)
				{if(a[j]>'0') {a[j]--;break;}
				 else a[j]='9';
				}
			}
		}
	}
	for(m=0;m<n;m++)
		printf("%s\n",r[m]);
}