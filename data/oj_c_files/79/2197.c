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
	int n[10000], m[10000], i=0, s[10000],k,l,j,r=0;
    while(1){	
	 scanf("%d", &n[i]);
	 scanf("%d", &m[i]);
	  if(m[i]==0&&n[i]==0){
	 	break;
	 }
	 	 k=n[i];
	  for(j=2; j<=k; j++){
	   s[i]=(s[i]+m[i])%j;
	  }  
	  i++;
	  r++;
    }
    for(l=0;l<r;l++){
    	 printf("%d\n",s[l]+1);	
    	}
	return 0;
 }