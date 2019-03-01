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
	int n,k;
    int a[1000];
    scanf("%d%d",&n,&k);
	int i,j,r,f;
    for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	f=0;
    for(j=0;j<n;j++)
	{
	    for(r=j+1;r<n;r++)
		{
		    if(a[j]+a[r]==k)
			{
			    f++;
			}
		}
	}
	if(f>0)
	{
		printf("yes");
	}
	else 
		printf("no");
    return 0;
}
