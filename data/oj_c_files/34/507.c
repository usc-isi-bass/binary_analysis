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
	int n,i,j,a[10000],b=0,c,d=0;
	
	scanf("%d",&n);
	if(n==1) printf("End");
	else{
		for(i=0;;i++){
			if(n==1){
				printf("End");
				break;
			}
			else{
			    if(n%2==0){
				    printf("%d/2=%d\n",n,n/2);
				    n=n/2;
				}
			    else{
				    printf("%d*3+1=%d\n",n,n*3+1);
				    n=n*3+1;
				}
			}
		}
	}
	return 0;
}

