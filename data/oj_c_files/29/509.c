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
  int m,i,j,t,o,p,e;
  double k[50]={0};
  scanf("%d",&m);
  for(i=0;i<m;i++){
     scanf("%d",&t);
	 o=2;
	 p=1;

	 for(j=0;j<t;j++){
		 k[i]+=1.0*o/p;
		 e=p;
		 p=o;
		 o+=e;
	 }

  }
  for(i=0;i<m;i++){
	  if(i==m-1){
	  printf("%.3lf",k[i]);
	  }
	  else{
		  printf("%.3lf\n",k[i]);}
  }
  

return 0;
}