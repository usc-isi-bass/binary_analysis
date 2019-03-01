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
	int n,a[300],i=0,t=0,p=0;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
			
	}
	for(i=0;i<=n-1;i++)
	{
	for(t=0;t<=i-1;t++)
		{
			if(a[i]==a[t])
				p++;
		}
    
	if(p!=0)
			a[i]=0;
	p=0;
	}
	for(i=0;i<=n-1;i++)
	{
		if(a[i]!=0)
		{printf("%d",a[i]); 
		break;}
	}
    for(t=i+1;t<=n-1;t++)
	{
		if(a[t]!=0)
			printf(",%d",a[t]); 
	}
}