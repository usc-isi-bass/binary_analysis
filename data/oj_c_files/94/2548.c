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
    int N,i,n,j;
    scanf("%d",&N);
    int sz[N];
    for(i=0;i<N;i++){
    scanf("%d",&sz[i]);}
    int js[N];
    for(i=0,j=0;i<N;i++){
        if(sz[i]%2!=0){
            js[j]=sz[i];
            j++;}
        }
  for(int k=1;k<=j;k++){	
      int e;	
for(int	m=0;m<j-k;m++){	
	 	 if(js[m]> js[m+1]){	
	 	 	 	 e=js[m+1];	
	 	 	 	 js[m+1]=js[m];	
	 	 	 	js[m]=e;	
	 	 }}}
          for(i=0;i<j-1;i++){
           printf("%d,",js[i]);}   
           printf("%d",js[j-1]);
    return 0;
    }




