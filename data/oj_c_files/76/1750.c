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
	int i,n,x=10000,y=0,s=0,o,a[MAX],b[MAX];
	double k;
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		scanf("%d%d",&a[i],&b[i]);
	}
	
	for (i=1;i<=n;i++){
		if(a[i]<=x){
			x=a[i];
		}
		if(b[i]>=y){
			y=b[i];
		}
	}
	for (k=x+0.1;k<y;k++){
		o=0;
		for(i=1;i<=n;i++){
			if((k>a[i])&&(k<b[i])){
				o++;
			}
		}
		if (o==0){
			s++;
		}
	}
	if(s==0){
		printf("%d %d",x,y);
	}else{
		printf("no");
	}
	return 0;
}