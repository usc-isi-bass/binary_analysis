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

/* Note:Your choice is C IDE */
main()
{
    int n,i,d=0,k,a[1001],s,l;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        l=0;
    	for(k=1;k<=n;k++)
    	{
    		scanf("%d ",&a[k]);
    		if(a[k]==0) l++;
    	}
    	if(l!=0) break;
    }
    for(i=i+1;i<=n;i++)
    {
    	int m=0;
    	for(k=1;k<=n;k++)
    	{
    		scanf("%d ",&a[k]);
    		if(a[k]==0) m++;
    	}
    	if(m!=0) d++;
    	else break;
    }
    s=(d-1)*(l-2);
    printf("%d",s);			
}