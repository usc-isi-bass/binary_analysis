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
	int n,i,a[6]={0},b[6];
	b[0]=100;
	b[1]=50;
	b[2]=20;
	b[3]=10;
	b[4]=5;
	b[5]=1;
	scanf("%d",&n);
	int q=n,p=n;
	a[0]=q/100;
	p-=a[0]*b[0];
	for(i=1;i<6;i++){
		
		a[i]=p/b[i];
        p-=a[i]*b[i];
	}
	for(i=0;i<6;i++){
		printf("%d\n",a[i]);
	}		
	return 0;
}