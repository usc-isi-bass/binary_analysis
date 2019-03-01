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
	int n,k[50],i,l=0,s=0;
	float m=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d,",&k[i]);
	for(i=0;i<n;i++)
		m=m+k[i];
	m=m/n;
	for(i=0;i<n;i++)
	{
		if(k[i]>l)
			l=k[i];
	}
	s=l;
	for(i=0;i<n;i++)
	{
		if(k[i]<s)
			s=k[i];
	}

	if((l-m)>(m-s))
		printf("%d",l);
	else if((l-m)<(m-s))
		printf("%d",s);
	else
		printf("%d,%d",s,l);
	return 0;
}