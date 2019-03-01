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
	char a[81]={0};
	int n,i,j,l,r=0;
	scanf("%d\n",&n);
	for (i=0;i<n;i++)
	{
		gets(a);
		l=strlen(a);
		if ((a[0]=='_')||((a[0]<='z')&&(a[0]>='a'))||((a[0]<='Z')&&(a[0]>='A')))
			{
				r=1;
				for (j=1;j<l;j++)
				{
					if ((a[j]=='_')||((a[j]<='z')&&(a[j]>='a'))||((a[j]<='Z')&&(a[j]>='A'))||((a[j]<='9')&&(a[j]>='0')))
						r=r+1;
				}
				if (r==l) r=1;
				else r=0;
			}
		printf("%d\n",r);
		r=0;
	}
	return 0;
}