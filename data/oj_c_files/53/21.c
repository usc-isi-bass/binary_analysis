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
   	int i,j,n,m,x,a[301];
    scanf("%d",&n);
	for(i=0;i<=n-1;i=i+1)scanf("%d",&a[i]);
    for(m=0,i=0;i<=n-2;i=i+1)
	{
		for(j=i+1;a[i]!=10000&&j<=n-1;j=j+1)
		{
			if(a[i]==a[j])a[j]=10000;
		}
	}
    for(i=0;i<=n-1;i=i+1)
	{
		if(a[i]!=10000)printf("%d",a[i]);x=i;break;
	}
	for(i=x+1;i<=n-1;i=i+1)
	{
      if(a[i]!=10000)printf(",%d",a[i]);
	}

}
	