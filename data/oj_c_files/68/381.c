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

int n,i,j,k,limit,s;
int main(){
	scanf("%d",&n);
	for (i=2;i<=n;i+=2)
		for (j=3;j<=i/2;j+=2){
			int flag=1;
			limit=sqrt(j);
			for (k=3;k<=limit;k+=2)
				if (j%k==0){
					flag=0;break;
				}
			if (!flag)continue;
			limit=sqrt(i-j);
			for (k=3;k<=limit;k+=2)
				if ((i-j)%k==0){
					flag=0;break;
				}
			if (flag){
				printf("%d=%d+%d\n",i,j,i-j);
				break;
			}
		}
	return 0;
}