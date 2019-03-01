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
	int n,i,c,j;
	scanf("%d",&n);
	int sz[100]={1,0};
	c=0;
	for(j=0;j<n;j++){
	        for(i=0;i<100;i++){
                       sz[i]=sz[i]*2+c;
                       if(sz[i]>=10){
                                     sz[i]-=10;
                                     c=1;
                                     }else{
                                           c=0;
                                           }
                                           }
                                           }
     i=99;
                        while(sz[i]==0){
                                       i--;
                                       }
                                       
      for(;i>=0;i--){
                     printf("%d",sz[i]);
                     }                                                        

return 0;
}
