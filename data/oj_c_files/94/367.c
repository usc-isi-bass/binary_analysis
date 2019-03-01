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
	int N,e,i,k,a[500],flag=0;
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%d",&a[i]);
	}


	for(k=1;k<=N;k++){
		for(i=0;i<N-k;i++){
			if(a[i]>a[i+1]){
			e=a[i];
			a[i]=a[i+1];
			a[i+1]=e;
			}
		}
	}


	for(i=0;i<=N-1;i++){
		if((a[i]+2)%2!=0){
			if(flag==0)
			{
				printf("%d",a[i]);
				flag=1;
			}
			else
			{
				printf(",%d",a[i]);
			}
		}
	}
	return 0;
}
