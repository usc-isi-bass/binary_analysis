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
	int str[301];
	char a[500]={0};
	int n,i,dd=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&str[i]);
	for(i=0;i<n;i++)
	{
		if(a[str[i]]==0)
		{
			if(dd==1)
			printf(",");
			dd=1;
			printf("%d",str[i]);
			a[str[i]]=1;
		}
	}
	printf("\n");
	return 0;
}