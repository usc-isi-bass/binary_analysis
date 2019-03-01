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
	int a,b,c,d,e,f,i,j,k;
	while(1){
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){ break;}
	if(c==0&&e==0&&f==0){
		a=23-a;
		b=60-b;
		c=60-c;
	}else{
		a=d+11-a;
		b=e+59-b;
		c=f+60-c;
	}
	k=a*3600+b*60+c;
	printf("%d\n",k);
	}
	return 0;
}