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
	char s1[300],s2[300];
	scanf("%s %s",s1,s2);
	int a[128],b[128],i,n,m,k=1;
	for(i=0;i<128;i++)
	{
		a[i]=0;
		b[i]=0;
	}
	n=strlen(s1);
	m=strlen(s2);
	if(m==n)
	{
		for(i=0;i<n;i++)
		{
			a[s1[i]]++;b[s2[i]]++;
		}
		for(i=0;i<128;i++)
		{
			if(a[i]!=b[i])
			{printf("NO");k=0;break;}
		}
		if(k!=0) printf("YES");
	}
	else printf("NO");
}
