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
	int n,a[100],s[100],i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d\n",&a[i]);

		s[1]=1;
		s[2]=1;
		for(j=3;j<=a[i];j++)
		{
			s[j]=s[j-1]+s[j-2];
		}
		s[i]=s[a[i]];
		printf("%d\n",s[i]);
	}
	return 0;
}
