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
	int i,j,p,t,a[301],max=0;
	char b[301];
	for(i=1;i<=300;i++)
	{
		scanf("%d%c",&a[i],&b[i]);
		if(b[i]=='\n')
			break;
	}
	t=i;
	for(i=1;i<=t;i++)
		if(a[i]>=max)
		{
			max=a[i];
			p=i;	
		}
		for(j=1;j<=t;j++)
		{
			if(a[j]==max)
				a[j]=0;
		}
	max=0;
	for(i=1;i<=t;i++)
		if(a[i]>=max)
			max=a[i];
	if(!max)
		printf("No");
	else
		printf("%d",max);
	return 0;
}
