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
{int k,i,j,l=0,excit=0;
 scanf("%d",&k);
 int num[k],shulie[k];
 
 for (i=1;i<=k;i++)
 { scanf("%d",&num[i-1]);
   for (j=0;j<=i-2;j++)
	   if (num[j]==num[i-1])
	   {  
		   excit=1;
	      break;
	   }
	if (excit==0)
	{shulie[l]=num[i-1];
	 l=l+1;
	}
	else excit=0;
 }
 printf("%d",shulie[0]);
 for (i=2;i<=l;i++)
		 printf(" %d",shulie[i-1]);
 }