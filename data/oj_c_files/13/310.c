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
	int a[20000],b[20000];
	int n,i,m,p=0,l;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
    for(i=0;i<n;i++)
	{
		for(m=0;m<i;m++)
		{
			if(a[i]==a[m])break;
		}
        if(m==i)
		{
			p=p+1;
			b[p]=a[i];
		}
		
    }
	for(l=1;l<=p;l++)
	{
		if(l==p)printf("%d",b[l]);
		else printf("%d ",b[l]);
	}
	return 0;
	
}
