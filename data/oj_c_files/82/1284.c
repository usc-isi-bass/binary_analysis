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
	int a,b,c,y[100],i,j=1;
	scanf("%d",&a);
	for(i=0;i<a;i++){
		scanf("%d%d",&b,&c);
		if(b>140||b<90||c>90||c<60){
			y[j]=i+1;
			j++;
		}
	}
	y[0]=0;
	y[j]=a+1;
	j++;
	a=y[1]-y[0];
	for(i=1;i<j-1;i++){
		if((y[i+1]-y[i])>a){
			a=y[i+1]-y[i];
		}
	}
	a=a-1;
	printf("%d",a);
	return 0;
}