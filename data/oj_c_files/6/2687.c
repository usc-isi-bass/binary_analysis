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
	int k,m,n,s,i,j,a;
	for(scanf("%d",&k);k>0;k--)
	{
		s=0;
		scanf("%d%d",&m,&n);
		for(j=0;j<n;j++)
		{
			scanf("%d",&a);
			s=s+a;
			}
		for(i=1;i<m-1;i++)
		{
			scanf("%d",&a);
			s=s+a;
			for(j=1;j<n;j++)
			scanf("%d",&a);
			if(n!=1)
			s=s+a;
			}
		if(m!=1)
		for(j=0;j<n;j++)
		{
			scanf("%d",&a);
			s=s+a;
			}
		printf("%d\n",s);
		}
}