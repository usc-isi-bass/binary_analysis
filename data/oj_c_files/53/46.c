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


void main()
{
	int n;
	scanf("%d",&n);

	int a[300];
	int state[300]={0};
	int i;
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}

	int j;
	for (i=0;i<n-1;i++){
		if (state[i]==0){
			for (j=i+1;j<n;j++){
				if (a[j]==a[i]) state[j]=1;
			}
		}
	}
	int k=0;
	int result[300]={0};
	for (i=0;i<n;i++){
		if (state[i]==0){
			result[k]=a[i];
			k++;
		}
	}

	printf("%d",result[0]);
	for (i=1;i<k;i++){
		printf(",%d",result[i]);
	}
}
