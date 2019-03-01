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
	int shuzu[1001],jilu[1001];
	int a=0,b=0,c,n,i,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(k=0;k<n;k++)
		{
		scanf("%d",&shuzu[k]);
		if(shuzu[k]==0)
		{
			jilu[a]=k;
			a++;
		}
		}
		if(a==2)
		{
			c=jilu[1]-jilu[0]-1;
			b+=c;
		}
		a=0;
	}
	printf("%d",b);
	return 0;
}
