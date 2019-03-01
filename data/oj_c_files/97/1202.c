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
	int n,i,a[6],b[6]={100,50,20,10,5,1};
	scanf("%d",&n);
	a[0]=n/b[0];
	printf("%d\n",a[0]);
	for(i=0;i<5;i++){
		n-=a[i]*b[i];
		a[i+1]=n/b[i+1];
		printf("%d\n",a[i+1]);
	}
	return 0;
}
