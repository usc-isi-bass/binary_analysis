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

int main(int argc, char* argv[])
{
	int n,k,i,a[1000],x,j,z=0;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		x=k-a[i];
		for(j=0;j<n;j++)
		{
			if(j==i) continue;
			if(a[j]==x) z=1;
		}
	}
	if(z==1) printf("yes");
	else printf("no");
	return 0;
}