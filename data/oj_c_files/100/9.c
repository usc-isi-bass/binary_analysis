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
	int i,n,a[123]={0},u=0,k;
	char c[301]={0};
	gets(c);
	k=strlen(c)-1;
	for(i=0;i<=k;i++)
	{
		if(c[i]>=97&&c[i]<=122)
		{	
			a[c[i]]=a[c[i]]+1;
			u=u+1;
		}
	}
	if(u==0)
		printf("No\n");
	else
	{
		for(i=97;i<=122;i++)
		{
			if(a[i]>0)
				printf("%c=%d\n",i,a[i]);
		}
	}
}