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
	int k,d,a[300]={0},i,l=0,p;
	scanf("%d",&k);
	while(k)
	{
		k=k-1;
		p=0;
		scanf("%d",&d);//??????
		for(i=0;i<l;i=i+1)
			if (d==a[i])//??????
			{
				p=1;
				break;
			}
		if (p==0)
		{
			a[l]=d;//a[i]???????????
			l++;
		}
	}
	for(i=0;i<l-1;i=i+1)
		printf("%d,",a[i]);
	printf("%d",a[l-1]);
	return 0;
}
