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
	int i,j,n,count=0,len;
	char fig[N+1];
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%s",fig);
		len=strlen(fig);
		if (fig[0]<'A'||(fig[0]>'Z'&&fig[0]<'_')||(fig[0]>'_'&&fig[0]<'a')||(fig[0]>'z'))
		{
			count++;
		}
		for (j=1;j<len;j++)
		{
				if ((fig[j]<'0')||(fig[j]>'9'&&fig[j]<'A'||(fig[j]>'Z'&&fig[j]<'_')||(fig[j]>'_'&&fig[j]<'a')||(fig[j]>'z')))
				{
					count++;
				}
		}
		if (count==0)
		{
			printf("yes\n");
		}
		else
		{
			printf("no\n");
		}
		count=0;
	}
	return 0;
}