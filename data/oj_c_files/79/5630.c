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
	int a;
         int n,m;
	for(a=1;;a++){
    	    scanf("%d%d",&n,&m);
	    if(m==0||n==0){
			break;
		}
             int f[99999];
	    int i,j,k,t;
	    i=1;
	    j=n;
	    t=n+1;
	    for(k=1;k<=n;k++){
		    f[k]=k;
		}
             while(j!=1){
                   for(i=i;i<t;i++){
			        if(i%m==0){
				       f[i]=0;
				       j=j-1;
				       if(j==1){
					      break;
					   }
					}
		        	if(f[i]!=0){
				        f[t]=f[i];
			        	t++;
					}
			  }
		}
                  printf("%d\n",f[t-1]);
	}
	return 0;
} 
