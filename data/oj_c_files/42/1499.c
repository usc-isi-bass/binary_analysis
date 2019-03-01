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
{   int i=0,n,j,x;
	long int a[100000];
	scanf("%d",&n);
	printf("\n");
	for(i=0;i<n;i++){
		scanf("%ld",&a[i]);
	}
	i=0;
	printf("\n");
	scanf("%d",&x);
	while(i<n){
		if(a[i]==x){
			n=n-1;
			for(j=i;j<n;j++){
				a[j]=a[j+1];
			}
			i=i-1;
		}
		i++;
	}
	printf("%ld",a[0]);
	for(i=1;i<n;i++){
		printf(" %ld",a[i]);
	}
	return 0;
}