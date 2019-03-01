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
	int n,i,j,k,a[20001];
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		for(j=0;j<i;j++)
			if(a[i]==a[j]){
				a[i]=0;
				break;
			}
	}
	for(k=0;k<n;k++){
		if(a[k]){
			if(!k)
				printf("%d",a[k]);
			else
				printf(" %d",a[k]);
		}
	}
}