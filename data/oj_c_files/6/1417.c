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

int main (){
   int sz[N][M];
   int k,n,m,i,j,l;
   int sum=0;
   
   scanf("%d ",&k);
   
   for (l=0;l<k;l++){
	   sum=0;
scanf("%d%d",&n,&m);
   for (i=0;i<n;i++){
	   for(j=0;j<m;j++){
	   scanf("%d ",&sz[i][j]);
	   }
   }
   
   
   for(j=0;j<m-1;j++){
	   
		  sum+=sz[0][j];
   }
   for(i=0;i<n-1;i++){
          sum+=sz[i][m-1];
   }
   for(j=1;j<m;j++){
          sum+=sz[n-1][j];
   }                      
   for(i=1;i<n;i++){
          sum+=sz[i][0];
   }
printf("%d\n",sum);
   }
   return 0;
}
