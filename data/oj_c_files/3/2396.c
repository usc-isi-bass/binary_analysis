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
	int n,k,i,m,e;
	int p[1000];
	scanf("%d%d\n",&n,&k);
	e=n;
	for(i=1;i<=n;i++){
		scanf("%d",&p[i]);
	}
	for(m=1;m<=n-1;m++){
		for(i=m+1;i<=n;i++){
			if(p[m]+p[i]==k){
				printf("yes");
				e=i;
				break;
			}else if(m==n-1&&i==n){
				printf("no");
				e=i;
				break;
		}
		}
		if(e!=n||(m==n-1&&e==n)){
			break;
		}
	}
	return 0;
}
