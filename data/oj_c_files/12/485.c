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
	while(1)
	{
		int a[100]={-2}, i, j, count=0;
		for(i=0; ; i++)
		{
			scanf("%d", &a[i]);
			if(a[0]==-1||a[i]==0) break;
		}
		if(a[0]==-1) break;
		for(i=0; a[i+1]!=0; i++)
			for(j=i+1; a[j]!=0; j++)
				if(a[i]==2*a[j]||a[i]*2==a[j])
					count++;
		printf("%d\n", count);
	}
}