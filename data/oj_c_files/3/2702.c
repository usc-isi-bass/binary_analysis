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
	int n,k,i,j,s;
	int a[1000];
	s=0;
	scanf("%d %d",&n,&k);
	for(i=1;i<=n;i++) 
		scanf("%d",&a[i]);
	for(i=1;i<=n-1;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if((a[i]+a[j])==k) s=s+1;
		}
	}
	if(s==0) printf("no");
	else printf("yes");
	return 0;
}
