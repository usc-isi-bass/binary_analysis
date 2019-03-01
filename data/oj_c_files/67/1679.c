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
  int n;
  scanf("%d",&n);
  int i,x,y;
  double a,b;
  scanf("%d%d",&x,&y);
    a=1.0*y/x;
  for(i=2;i<=n;i++){
    scanf("%d%d",&x,&y);
	b=1.0*y/x;
	  if((a-b)>0.05){
	    printf("worse\n");
	  }
	  else if((b-a)>0.05){
	    printf("better\n");
	  }
	  else{
	    printf("same\n");
	  }
	}
  return 0;
}