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
	int n,i,j,k,p,a[10001],b[10001],s=0,t=0;
	scanf("%d",&n);
	for(i=0;;i++)
	{
		scanf("%d %d",&a[i],&b[i]);
		if(a[i]==0&&b[i]==0)
		break;
	}
	for(j=0;j<=i-1;j++)
	{
		for(k=0;k<=i-1;k++)
		{
			if(b[j]==b[k])
			s++;
		}
		if(s==n-1)
		{
			for(p=0;p<=i-1;p++)
			{
				if(a[p]==b[j])
				break;
			}
			if(p==i)
			{
				printf("%d",b[j]);
				t=1;
				break;
			}
		}
		s=0;
	}
	if(t==0)
	printf("NOT FOUND");
}