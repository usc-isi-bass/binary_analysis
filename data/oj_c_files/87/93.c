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
int a,b,c,d,e,f,i,s=0;
int sz[10000];
for(i=0;i<10000;i++){
	scanf("%d",&sz[i]);
	if((i+1)%6==0){
		a=sz[i-5];
		b=sz[i-4];
		c=sz[i-3];
		d=sz[i-2];
		e=sz[i-1];
		f=sz[i];
		if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){
			break;
		}
		if(d<a){
			d=d+12;
		}else if(d<12){
			d=d+12;
		}
		s=(3600*d+60*e+f)-(3600*a+60*b+c);
		printf("%d\n",s);
	}
	if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){
		break;
	}
}
return 0;
}