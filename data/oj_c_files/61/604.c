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
	int n,a,b,c,i,j,m,sz[100];
	scanf("%d",&m);
	for(j=0;j<m;j++){
	    scanf("%d",&n);
	    a=1;
	    b=1;
	    if(n==1||n==2){
		    c=1;
		}else if(n>=3){
	        for(i=3;i<=n;i++){
		        c=a+b;
		        a=b;
		        b=c;
			}
		}
	    sz[j]=c;
	}
	for(j=0;j<m;j++){
		printf("%d\n",sz[j]);
	}
	return 0;
}
