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
	int i,n,f,t,a[1000]={0},hash[100000]={0};
	scanf("%d",&n);
	for(i=1,f=0;i<=n;i++)
	{
		scanf("%d",&t);
		if(hash[t]++==0)
		{
			if(f++==0) printf("%d",t);
			else printf(",%d",t);
		}
	}
}