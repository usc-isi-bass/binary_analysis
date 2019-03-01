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
	int n,k,i,j,a[1005],ans=0;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",a+i);
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]+a[j]==k){
				ans=1;
				break;
			}
		}
	}
	printf("%s\n",ans?"yes":"no");
}