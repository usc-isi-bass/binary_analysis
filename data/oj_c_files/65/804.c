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
  int n,a,b,k,t=0,i=0,o=0;
  scanf("%d",&n);
  for(k=0;k<n;k++){
  scanf("%d%d",&a,&b);
  if(a==b){t++;}
  else if(a==0&&b==1){i++;}
  else if(a==0&&b==2){o++;}
  else if(a==1&&b==0){o++;}
else if(a==1&&b==2){i++;}
else if(a==2&&b==0){i++;}
 else if(a==2&&b==1){o++;}
  }
	  if(i>o){
		  printf("A");
	  }
	  else if(i<o){
		  printf("B");}
	  else if(i==o){
		  printf("Tie");}

return 0;
}