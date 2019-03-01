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
	int n,i,m1,m2,a;
	int s[100];
	scanf("%d",&n);
	i=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&s[i]);
	}
	m1=s[0];
	m2=s[0];
	for(i=0;i<n;i++)
	{
		if(m1<s[i])
		{
			m1=s[i];
			a=i;
		}
	}
    s[a]=s[n-1];
	s[n-1]=m1;
	for(i=0;i<n-1;i++)
	{
		if(m2<s[i])
		{
			m2=s[i];
		}
	}
	printf("%d\n",m1);
	printf("%d\n",m2);
	return 0;
}

