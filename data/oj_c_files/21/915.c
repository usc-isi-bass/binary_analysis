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
{int i,j,k,temp=0,n,x[301],y[301];
 float ave=0,max=0;
 scanf("%d",&n);
 for (i=0;i<n;i++)
 {scanf("%d",&x[i]);
 ave=x[i]+ave;}
 ave=ave/n;
 for (i=0;i<n;i++)
	 if(fabs(ave-x[i])>max)
	   max=fabs(ave-x[i]);
 for (i=0,j=0;i<n;i++)	 
    if (fabs(ave-x[i])>max-0.01)
	{y[j]=x[i];j++;}
 k=j-1;
 for (i=1;i<=n;i++)
	for(j=0;j<k;j++)
	 {if(y[j]>y[j+1])
	    {temp=y[j];
	     y[j]=y[j+1];
		 y[j+1]=temp;
	 }}
	printf("%d",y[0]);
 for (i=1;i<=k;i++)
	 printf(",%d",y[i]);
return 0;
 
}

