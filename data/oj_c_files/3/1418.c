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
	int n,k,j,m;
	int a[1000];
	scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(j=0;j<n;j++){
		for(m=0;m<n;m++){
			if((a[j]+a[m])==k){
				printf("yes");
				break;
			}
		}
		if((a[j]+a[m])==k){
				break;
		}else if(j==n-1){
			printf("no");
		}
	}
	return 0;
}