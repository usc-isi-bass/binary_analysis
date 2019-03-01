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

char br[1000][8],jl[1000][8];
int main(){
   int i,n,m,j;
   double a,b,c,d,sum=0.0;
   scanf("%d",&n);
   for (i=0;i<n;i++){
	   scanf("%d",&m);
	   a=1.0,b=2.0;
	   for (j=0;j<m;j++){
		   c=b/a;
		   sum+=c;
           d=b;
		   b=b+a;
		   a=d;
	   }
	   printf("%.3lf\n",sum);
	   sum=0.0;
   }
	return 0;
}
