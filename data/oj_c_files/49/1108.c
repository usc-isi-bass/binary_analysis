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
	char a[501],b[501];
	int i,j,k,n,q,p,s;
	scanf("%s",a);
	n=strlen(a);
	for(i=2;i<=n;i++)
	{
		for(j=0;j<n-i+1;j++)
		{
			for(k=0;k<i;k++)
			{
				b[k]=a[j+k];
			}
			for(q=0,s=0;q<=(i-2)/2;q++)
			{
				if(b[q]!=b[i-1-q])s=1;
			}
			b[i]='\0';
			if(s==0)printf("%s\n",b);

		}
	}
	return 0;
}