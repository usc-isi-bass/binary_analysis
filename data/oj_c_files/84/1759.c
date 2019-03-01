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
	int a[100];
	int n,i,j,m,max;
	scanf("%d",&n);
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	};
    for (j=0;j<2;j++){
		max=a[j];
		for (i=j+1;i<n;i++){
			if (a[i]>a[j]){
				m=a[i];
				a[i]=a[j];
				a[j]=m;
			}
		}
	}
		printf("%d\n",a[0]);
		printf("%d\n",a[1]);
	return 0;
}
