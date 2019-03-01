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
	int i,u,num,n,a[100],b[100][100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		num=a[i]*3;
		for(u=0;u<a[i];u++){
			scanf("%d",&b[i][u]);
			if(u*3+b[i][u]>59){
				num-=3;
			}
			if(u*3+b[i][u]==59){
				num-=2;
			}
			if(u*3+b[i][u]==58){
				num-=1;
			}
		}
		printf("%d\n",60-num);
	}
	return 0;
}