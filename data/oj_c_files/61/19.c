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

void main(){
	int n,a[10050];
	int i,j,num;
	scanf("%d",&n);
	a[1]=1;a[2]=1;
	for(j=1;j<10000;j++){
		a[j+2]=a[j+1]+a[j];
	}
	for(i=0;i<n;i++){
		scanf("%d",&num);
		if(num==0)
			printf("0\n");
		else if(num==1)
			printf("1\n");
		else
			printf("%d\n",a[num]);
	}
}
