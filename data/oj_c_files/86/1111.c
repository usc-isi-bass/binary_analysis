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

void main(){
	int n,m;
	int a[60],sum;
	int i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&m);
		for(j=0;j<m;j++){
			scanf("%d",&a[j]);
		}
		sum=0;
		if(m==0)//???????60
			sum=60;
		for(j=0;j<m;j++){
			if(a[j]+3*j>=60){//?????????????60s???60?????????????ok?1????
				sum=60-3*j;
				break;
			}
			else if(a[j]+3*(j+1)>=60){//??????(??a[j])???????60s??????????3s????????a[j]?2????
				sum=a[j];
				break;
			}
		}
		if(j==m)//
			sum=60-3*m;
		printf("%d\n", sum);
	}
}
//????????1???????60s??2???3s???60s?

