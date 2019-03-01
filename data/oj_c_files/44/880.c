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

int main()
{
	int i,a,b;
	int reverse(int);
	for(i=0;i<6;i++){
		scanf("%d", &a);
		if(a>=0){
		b=reverse(a);
		}
		if(a<0){
		a=-a;
		b=-reverse(a);
		}
		printf("%d", b);
                if(i<5) printf("\n");
	}
	return 0;
}

int reverse(int a)
{
	int j,b=0,k, c[10]={0};
	for(j=9;j>=0;j--){
		c[j]=a%10;
		a=a/10;
		if(a==0) break;
	}
	for(k=9;k>=j;k--){
		b=b*10+c[k];
	}
	return b;
}
