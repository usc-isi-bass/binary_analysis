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
	int t,i,m,k,r,n;
	scanf("%d %d",&n,&k);
	     for(m=n;;m++)
		 {
			 t=m;
			 for(i=1;i<=n;i++)
			 { if(t<n) break;
			   
			   r=t%n;
			   if(r!=k) break;
			   t=(t-k)*(n-1)/n;
			 } 
			 if (i>n) {printf("%d",m); break;}
			 
		 }
}
	