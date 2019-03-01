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
    int i,j,n;
	int a[10000];
    for(i=1;i<=10000;i++)
		a[i]=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&j);
		if(a[j]==0)
		{  
		    a[j]=1;
			if(i==1)
				printf("%d",j);
			else
				printf(",%d",j);
		}
	}

	return 0;
}