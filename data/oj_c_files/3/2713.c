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
	int n,k;//??n,k???
	scanf("%d %d",&n,&k);
	int a[1000],i=1;
	for(i=1;i<=n;i++)//?????????
		scanf("%d",&a[i]);
	int ceshi=0;
	int x1,j=1;
	for(j=1;j<=n-1;j++)//????????????????
	{
		for(x1=n;x1>=j+1;x1--)//??????????????
		{
			if(a[j]+a[x1]==k)
			{
				ceshi=1;
			}
		}
	}
	if(ceshi==1)
		printf("yes");
	else
		printf("no");
	return 0;
}
		


