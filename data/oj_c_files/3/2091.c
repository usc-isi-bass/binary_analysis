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
	int n,i,h,b,c,j,k;
	int a[1000];
	b=0;
	scanf("%d%d",&n,&h);
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(j=1;j<=n;j++){
		for(k=j+1;k<=n;k++){
			if(a[j]+a[k]==h){
				printf("yes");
				b=1;
				goto A;
			}
		}
	}
	A:
	if(b==0)printf("no");		
	return 0;
}