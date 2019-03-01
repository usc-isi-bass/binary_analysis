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
    int a,b,x,y,n,i;
	scanf("%d",&n);
    a=0;
	b=0;
	for(i=0;i<n;i++){
	    scanf("%d%d",&x,&y);
		if((x-y)*(x-y)==1){
			if(x>y){
                b++;
            }else{
			    a++;
			}
		}
	    if((x-y)*(x-y)==4){
			if(x>y){
                a++;
            }else{
			    b++;
			}
		}
	}
	if(a>b){
	    printf("A\n");
	}
    if(a==b){
	    printf("Tie\n");
	}
    if(a<b){
	    printf("B\n");
	}
	return 0;
}