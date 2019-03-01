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
   int n,k,i,m[1000],a;
   scanf("%d%d",&n,&k);
   for(i=0;i<n;i++)
   {
	   scanf("%d",&(m[i]));
       for(a=0;a<i;a++){
		   if(k==m[a]+m[i]){
			   printf("yes\n");
		       goto abc;
		   }
	   }
   }
   printf("no\n");
abc:	return 0;
}
