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
  int n,a[10000],t=0; 
  scanf("%d",&n);
  if(n<5) printf("empty");
  else{
     for(int i=3;i<=n;i++){
         for(int j=2;j<i;j++){
		   if(i%j==0) break;
		   else {
		      if(j<i-1) continue;
			  if(j==i-1) {
				  a[t]=i;
				  t++;
			  }
		   }
		 }
	 }
	 for(int r=1;r<t;r++){
	    if(a[r]-a[r-1]==2) printf("%d %d\n",a[r-1],a[r]);
	 }
  }
  return 0;
}