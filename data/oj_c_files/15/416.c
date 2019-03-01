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
	int a=0, b=0, n, l, w, s;
	int i, j;
	int f[1000][1000];
    scanf("%d",&n);
	for(i=0;i<n;i++)
	{   
		a=0;
		for(j=0;j<n;j++)
		{
			scanf("%d",&f[i][j]);
			if(f[i][j]==0) a=a+1;

		}
		if(a>2)  l=a;

	}
	for (j=0;j<n;j++)
	{   
		b=0;
		for (i=0;i<n;i++)
		{
			if(f[i][j]==0) b=b+1;
		}
		if(b>2) w=b;
	}
	s=(l-2)*(w-2);
	printf("%d\n",s);
	return 0;
}

