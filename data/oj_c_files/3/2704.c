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
	int n,k,i,p,q,x;
	int a[1000];
	x=-1;
	scanf("%d %d",&n,&k);
	scanf("%d",&a[1]);
	for (i=2;i<=n;i++)               //??????n??
	{
		scanf(" %d",&a[i]);
	}
	for (p=1;p<=n-1;p++)            //???????????k??
	{
		for (q=p+1;q<=n;q++)
		{
			if (a[p]+a[q]==k)       //?????????????????????1???break?????
				x=1;
		}
		if (x==1)                   //x??1??????????????????
		break;
	}
	if (x==-1)
		printf("no");
	else
		printf("yes");
	return 0;
}