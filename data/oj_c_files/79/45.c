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
	int a[301],b[301];
	int i,j,n,m,p,t;
	int line,num;
	for(;;)
	{
	scanf("%d %d",&n,&m);
	if(n==0&&m==0)break;
	else
	{
	for(i=1;i<=n;i++)
		a[i]=i;
	for(num=0;num<n-1;num++)
	{
	    p=n-num;
	    for(i=1;;i++)
		{
			if(p>=m)break;
		    p=p+n-num;
		}
		if(i==1) line=m;
		else line=n-num-p%m;
	    for(j=1;j<=n-num-1;j++)
		{
	 	   if(line+j>n-num)
		    	t=line+j-(n-num);
		   else t=line+j;
		   b[j]=a[t];
		}
		for(j=1;j<=n-num-1;j++)
			a[j]=b[j];
	}
    printf("%d\n",a[1]);
	}
	}
}