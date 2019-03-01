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
     int n,a;
	 scanf("%d",&n);
	 int sz[N];
	 for(int k=0;k<n;k++){
		 scanf("%d",&sz[k]);
	 }
	 for(int j=1;j<n;j++){
	      for(int i=0;i<n-j;i++){
		       if(sz[i]>sz[i+1]){
			    a=sz[i+1];
			    sz[i+1]=sz[i];
			    sz[i]=a;
			   }
		  }
	 }
	 for(int e=0;e<n;e++){
		 if(sz[e]%2!=0){
			 if(e==n-1||e==n-2){
				 printf("%d",sz[e]);
			 }else{
               printf("%d,",sz[e]);
		 }
	 }
	 }
	 return 0;
}
