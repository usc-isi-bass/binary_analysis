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
	int n,x,y,i,t,total,max,a[100],b[100],c[100];
	for(i=0;i<=99;i++)
	{   
		a[i]=0;
		b[i]=0;
		c[i]=0;
	}

	scanf("%d",&n);
	for(i=0,t=0;i<=n-1;i++)
	{
		scanf("%d%d",&x,&y);
		if(x>=90&&x<=140&&y>=60&&y<=90)
		    a[t]=a[t]+1;
		else
		t=t+1;	
	}
max=a[0];
	for(i=0;i<=98;i++)
	{   
        if(max>a[i+1])
			total=max;
		else 
		{
			max=a[i+1];
		     total=max;
		}
	}
printf("%d\n",total);

	
	return 0;
}