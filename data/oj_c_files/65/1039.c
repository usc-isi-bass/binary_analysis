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

int main ()
{
	int n,i,a,b,m=0,p=0;
	scanf("%d",&n);
	for (i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		if((a==0&&b==0)||(a==1&&b==1)||(a==2&&b==2)){
			m=m+0;
			p=p+0;
		}
		if((a==0&&b==1)||(a==1&&b==2)||(a==2&&b==0)){
			m=m+1;
			p=p+0;
		}
		if((a==0&&b==2)||(a==1&&b==0)||(a==2&&b==1)){
			m=m+0;
			p=p+1;
		}
	}
	if(m==p){
		printf("Tie");
	}
	if(m>p){
		printf("A");
	}
	if(m<p){
		printf("B");
	}
	return 0;
}
