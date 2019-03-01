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
	int n,i,j,e=0;

	scanf("%d",&n);
    for(i=3;i<=n;i++){
		for(j=2;j<=i;j++){
			if(i%j==0) break;
		}
		if(j==i){
			i=i-2;
	      for(j=2;j<=i;j++){
			if(i%j==0) break;
		  }
		  if(j==i){
			  printf("%d %d\n",i,i+2);
			  e++;
		  }
		  i=i+2;
		}
	}
	if(e==0) printf("empty\n");



	return 0;
}