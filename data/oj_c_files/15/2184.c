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
    int a[1001][1001];
    int n,i,j,k,s=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	for(j=1;j<=n;j++)
    	{
    		scanf("%d",&a[i][j]);
    	}
    }
    for(i=1;i<=n;i++)
    {
    	for(j=1;j<=n-2;j++)
    	{
    		if(a[i][j]==0)
    		{
    			for(k=j+1;k<=n;k++)
    			{
    				if(a[i][k]==0)
    				{
    					s=s+(k-j-1);
    					break;
    				}
    			}
    		}
    	}
    }
    printf("%d",s);
    return 0;
}