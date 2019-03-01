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


int main(){
   char sor[20],wt[20];
   int i,j,tag;
   scanf("%s%s",wt,sor);
   int n=strlen(sor);
   int k=strlen(wt);
   for(i=0;i<n-k+1;i++){
	   tag=0;
	   for(j=i;j<=i+k-1;j++){
		   if(wt[j-i]!=sor[j]){
			   tag=1;
			   break;
		   }
	   }
	   if(tag==0){
		   printf("%d",i);
		   break;
	   }
   }
	return 0;
}


