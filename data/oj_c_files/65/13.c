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
	int a,b,n,t1,t2,i;
	scanf("%d",&n);
	a=b=0;
	for (i=0;i<n;i++){
		scanf("%d%d",&t1,&t2);
		if (t1==0){
			if (t2==1){
				a++;
			}else if (t2==2){
				b++;
			}
		}
		else if (t1==1){
			if (t2==0){
				b++;
			}else if (t2==2){
				a++;
			}
		}
		else {
			if (t2==0){
				a++;
			}else if (t2==1){
				b++;
			}
		}
	}
	if (a==b){
		puts("Tie");
	}else if (a>b){
		puts("A");
	}else
		puts("B");
}