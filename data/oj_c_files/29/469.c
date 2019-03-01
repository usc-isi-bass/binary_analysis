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
  int m,sz[100];
  double k;
  k=0.0;
  double fz=2.0,fm=1.0,j;
  scanf("%d",&m);
  for(int i=0;i<m;i++){
	 scanf("%d",&sz[i]);
  }
  for(int y=0;y<m;y++){
	  for(int x=0;x<sz[y];x++){
		  k=k+(fz/fm);
		  j=fz;
		  fz=fm+j;
		  fm=j;
	  }
	  fz=2.0;
	  fm=1.0;
	  printf("%.3lf\n",k);
	  k=0.0;
  }
  return 0;
}

      