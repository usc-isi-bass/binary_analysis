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

int main()
{
	int n,k,i,j,a,b;
	int sz[1000],zz[1000];
         b=0;
	scanf("%d %d",&n,&k);
          for(i=0;i<n;i++){
		      scanf("%d",&sz[i]);
		  }
         i=0;
         j=0;
	     while(i<n&&j<n){
              zz[j]=sz[i];
              i++;
              j++;
        }	
         for(i=0;i<n;i++){
		     for(j=0;j<n;j++){
				 if(i==j){
					 continue;
				 }
			    if(sz[i]+zz[j]==k){
                                a=1;
				}else{
                                a=0;
                }
                if(a==1||b==1){
					b=1;
				}else{
					b=0;
				}
			 }
         }
         if(b==1){
	       printf("yes");
         }else{
           printf("no");
		 }
return 0;
}
