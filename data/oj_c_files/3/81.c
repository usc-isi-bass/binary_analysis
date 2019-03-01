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



//#include <math.h>




int main()
{
	int n,k;
	int t;

	scanf("%d%d",&n,&k);

	int *a;
	a=(int *)malloc(sizeof(int )*n);

	int i,j;

	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}

	for(i=0;i<n;i++){
		t=k-a[i];
		for(j=0;j!=i&&j<n;j++){
			if(t==a[j]){
				printf("yes\n");
				return 0;
			}
		}
	}

	printf("no\n");

	return 0;
}

