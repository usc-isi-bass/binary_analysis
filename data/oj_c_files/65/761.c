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
	int n,a,b,i,m=0,p=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d%d",&a,&b);
		if(a==0){
			if(b==1)
				m++;
			if(b==2)
				p++;
			if(b==0){
				m++;
			    p++;
			}
		}
		if(a==1){
			if(b==0)
				p++;
			if(b==2)
				m++;
			if(b==1){
				m++;
				p++;
			}
		}
		if(a==2){
			if(b==0)
				m++;
			if(b==1)
				p++;
			if(b==2){
				m++;
				p++;
			}
		}
           

	}
	if(m>p)
		printf("A");
	else if(m<p)
		printf("B");
	else
		printf("Tie");
	return 0;
}
