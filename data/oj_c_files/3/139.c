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
	
	int i,j,n,sum,flag=0;
	int num[1000];
	scanf("%d %d",&n,&sum);
	for (i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	for (i=0;i<n-1;i++){
		for(j=n-1;j>i;j--){
			if(num[i]+num[j]==sum){
				printf("yes");
				flag=1;
				break;
			}
			if(flag==1){
				break;
			}

		}
		if(flag==1){
			break;
		}
	}
	if(flag==0){
		printf("no");
	}

	
	return 0;
}
