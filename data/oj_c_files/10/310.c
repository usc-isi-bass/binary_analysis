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

main()
{
	int k,i,a[25+10],n[25+10],s;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d",&a[i]);
		n[i]=1;
	}
	for(i=k-2;i>=0;i--)
	{
		int j;
		for(j=i+1;j<=k-1;j++)
		{
			if((a[i]>=a[j])&&(n[i]<=n[j]))n[i]=n[j]+1;		
		}
	}
	s=n[0];
	for(i=0;i<k;i++)
	{
		if(n[i]>s)s=n[i];
	}

	printf("%d",s);
	return 0;
}