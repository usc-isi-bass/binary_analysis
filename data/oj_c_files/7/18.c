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
	char a[300],b[300],c[300];
	int i,j,k,n1,n2;
	scanf("%s %s %s",a,b,c);
	n1=strlen(a);
	n2=strlen(b);
	for (i=0;i<=n1-n2;i++)
	{
		for (j=0;j<n2;j++)
			if (b[j]==a[i+j])
			{
				k++;
				if (k==n2) break;
			}
			else { k=0; break;}
			if(k==n2) break;
	}
	if (k==n2)
	{
		for (j=0;j<n2;j++)
			a[i+j]=c[j];
		printf("%s",a);
	}
else printf("%s",a);
	return 0;
}
