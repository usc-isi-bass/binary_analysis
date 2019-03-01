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
	int n[15],m[15],i;
	for(i=1;;i++)
	{
		scanf("%d%d",&n[i],&m[i]);
		if(n[i]==0&&m[i]==0) break;
	}
	int j,k,f;
	for(j=1;j<i;j++)
	{
		f=0;
		for(k=1;k<=n[j];k++)
		{
			f=(f+m[j])%k;
		}
		printf("%d\n",f+1);
	}

}