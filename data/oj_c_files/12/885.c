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
{int a[16],i,j,k,m,n;
 for(m=0;;m++)
 {   for(i=0;i<16;i++)
 {     scanf("%d",&a[i]);
       if(a[i]==-1) return;
	   if(a[i]==0) break;
 }
     n=0;
     for(j=0;j<i;j++)
	
		 for(k=0;k<i;k++)
			 if(a[j]==2*a[k])
				 n++;
	 
	 printf("%d\n",n);

 }
}