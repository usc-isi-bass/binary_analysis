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
      int i,k,r,c,a[8][8],p,q,n=0;
	  scanf("%d,%d",&r,&c);
	  for(i=0;i<r;i++){
		  for(k=0;k<c;k++){
			  scanf("%d",&(a[i][k]));
		  }
	  }
	  for(i=0;i<r;i++){
		  for(k=0;k<c;k++){
			  for(p=0;p<c;p++){
				  if(a[i][k]<a[i][p]){
					  break;
				  }
				  if(p==c-1){
					  for(q=0;q<r;q++){
						  if(a[i][k]>a[q][k]){
							  break;
						  }
						  if(q==r-1){
							  printf("%d+%d",i,k);
							  n=n+1;
							  break;
						  }
					  }
				  }
				  if(n==1){
					  break;
				  }
			  }
			  if(n==1){
				break;
			  }
		  } 
		  if(n==1){
			break;
		  }
	  }
	  if(n==0){
		  printf("No");
	  }
	  return 0;
}