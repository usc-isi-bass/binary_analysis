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

main()
{
	int i,j,n,a[25],b[25],t=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    	for(j=0,t=0;j<i;j++)
    	{
    	    if(a[j]>=a[i])
    		{
    			if(b[j]>t)
    			t=b[j];
    		}
    	}
    	if(t==0)
    	b[i]=1;
    	if(t>0)
    	b[i]=t+1;
    }
    for(i=0,t=0;i<n;i++)
    {
    	if(b[i]>t)
    	t=b[i];
    }
    printf("%d",t);
}