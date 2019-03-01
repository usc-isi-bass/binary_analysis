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
     int a[1000];
	 int n,k,i,j;
	 scanf("%d%d",&n,&k);
	 for(i=0;i<n;i++)
	 { scanf("%d",&a[i]);}
	 for(i=0;i<n;i++)
	 {  j=i+1;
	 for(;j<n;j++)
	 {  if(k==(a[i]+a[j]))
	 {printf("yes");
	   i=-1;break;}
	 }
	    if(i==-1)
			break;
		if(i==n-1)
		{printf("no");
		break;}
	 }

      return 0;
}