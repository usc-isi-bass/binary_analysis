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
	int n,a,i;
	scanf("%d",&n);
    int tag,sum=0;	
	for(i=1;i<=n;i++){
		tag=0;
		if(i%7==0){
			tag=1;
			continue;
		}
		if(tag==0){
			a=i;
            while(a>0){
				if(a%10==7){
					tag=1;
					break;
				}
			    else{
				    a=a/10;
				}
			}
		}
		if(tag==0){
			sum+=i*i;
		}
	}
	printf("%d",sum);
	return 0;
}
	
		
