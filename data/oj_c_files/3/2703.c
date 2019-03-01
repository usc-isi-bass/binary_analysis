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
{int n,k,i,j,exict=0;
 scanf("%d%d",&n,&k);
 int a[n];
 for (i=1;i<=n;i++)
	scanf("%d",&a[i-1]);
 for (i=1;i<=n;i++)
 { 
	 for (j=1;j<=i-1;j++)
	 { 
		 if (a[i-1]+a[j-1]==k)
		 {printf("%s","yes");
		  exict=1;
          break;
		 }
	 }
	 if (exict==1)
		 break;
 }
 if (exict==0)
	 printf("%s","no");
}