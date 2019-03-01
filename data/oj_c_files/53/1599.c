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
	int n,a[MAX],i,j,k;

	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(i==0)
			printf("%d",a[i]);
		else{
			k=0;
			for(j=0;j<i;j++){
				if(a[j]==a[i])
					k=1;
			}
			if(k==0)
				printf(",%d",a[i]);
		}
	}
}