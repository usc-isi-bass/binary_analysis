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
	int n;
	int i,j,k,a[10000],flag;
	scanf("%d",&n);
	k=0;   //??k???????????????????
	for(i=2;i<=n;i++){
		flag=1;
		for(j=2;j<i;j++){
			if(i%j==0)
				flag=0;
		}
		if(flag){
			a[k]=i;
			k++;
		}
	}
	flag=1;
	for(i=0;i<k-1;i++){
		if(a[i+1]-a[i]==2){
			printf("%d %d\n",a[i],a[i+1]);
			flag=0;
		}
	}
	if(flag)
		printf("empty");

}