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
	int w;
	for(w=1;;w++)
	{
	int a[16],b=0;
	int i,j,q;
	for(i=1;;i++)
	{
		scanf("%d",&a[i]);
		if(a[1]==-1) break;
		if(a[i]==0) break;
		b++;
	}
	if(a[1]==-1) break;
	int m=0;
	for(j=1;j<b;j++)
	{
		for(q=j+1;q<=b;q++)
		{
			if(a[j]==2*a[q]) m++;
			else if(a[q]==2*a[j]) m++;
		}
	}
	printf("%d\n",m);
    }
}