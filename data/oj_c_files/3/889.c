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

int a[1000];
int main()
{
	int n,k;
    scanf("%d %d",&n,&k);
	int s=0;
    int i,j;
	for(i=0;i<n-1;i++)
	{
		scanf("%d ",&a[i]);
	}
	scanf("%d",&a[n-1]);
	for(i=0;i<n;i++)
	{
       for(j=i+1;j<n;j++)
	   {
		   if(a[i]+a[j]==k)
			   s=s+1;
	   }
	}
	if(s!=0) printf("yes");
	else printf("no");
	return 0;
}
