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
    
    int m,n,i;
    scanf("%d",&n);
    int sz[100];
	if((n>1)&&(n<100)){
	  for(i=0;i<n;i++){
		  scanf("%d",&(sz[i]));
	  }
	  for(m=n-1;m>=0;m--){
          if(m>0){
              printf("%d ",sz[m]);
              }
		  else
              printf("%d",sz[m]);
	  }
	}
	return 0;
}

