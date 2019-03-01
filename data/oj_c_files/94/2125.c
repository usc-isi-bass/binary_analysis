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
	int i,j,N,a[500]={0},mid,m;
	scanf("%d\n",&N);
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);
	for(j=1;j<N;j++){
		for(i=0;i<N-j;i++){
			if(a[i]>a[i+1]){
				mid=a[i+1];
				a[i+1]=a[i];
				a[i]=mid;
			}
		}
	}
	for(i=0;i<N;i++){
		if(a[i]%2!=0){
			printf("%d",a[i]);
			m=i;
			break;}
		else continue;
	}
	for(i=m+1;i<N;i++){
		if(a[i]%2!=0){
			printf(",%d",a[i]);}
		else continue;
	}
	return 0;
}
