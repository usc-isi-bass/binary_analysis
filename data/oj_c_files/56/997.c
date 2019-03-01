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
	int a;
	scanf("%d",&a);
	int b,c,d,e,f,k;
	b=a/10000;
	c=a/1000-(b*10);
	d=a/100-(b*100)-(c*10);
	e=a/10-(b*1000)-(c*100)-(d*10);
	f=a-(b*10000)-(c*1000)-(d*100)-(e*10);
	k=f*10000+e*1000+d*100+c*10+b;
	for(int i=0;i<4;i++){
		if(k%10==0){
			k=k/10;
		}
	}
	printf("%d",k);
	return 0;
}