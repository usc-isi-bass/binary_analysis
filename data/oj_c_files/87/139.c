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
	int count=0;
	int a,b,c,d,e,f;
	while(1){
		
		
		scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
		if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0) break;
		int s=0;
		int m,n;
		m=a*3600+b*60+c;
		n=(d+12)*3600+e*60+f;
		s=n-m;
		if(count!=0)printf("\n");
		printf("%d",s);
		count++;
	}


	return 0;
}