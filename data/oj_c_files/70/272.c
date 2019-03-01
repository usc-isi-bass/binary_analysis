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
	int n,i,k;
	double x[9999],y[9999],l,m;
	 scanf("%d",&n);
	 
	 for(i=1;i<=n;i++)
	 {
         scanf("%lf%lf",&x[i],&y[i]);
		   
	 }
        l=sqrt((x[1]-x[2])*(x[1]-x[2])+(y[1]-y[2])*(y[1]-y[2]));
     for(i=1;i<=n;i++)
	 {
        
		
			for(k=i+1;k<=n;k++)
			{
			   m=sqrt((x[i]-x[k])*(x[i]-x[k])+(y[i]-y[k])*(y[i]-y[k]));
			   if(m>l) l=m;
			   
			   
			}
		
	 }printf("%.4lf\n",l);
	 return 0;
}

