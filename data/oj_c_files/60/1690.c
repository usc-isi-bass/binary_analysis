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

int main(int argc, char* argv[])
{
	int su[10000],i,j=0,k=0,n,t=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=2;j<=i;j++){
			if(i!=j&&i%j==0) break;
			if(i==j){
				su[k]=i;
				k++;
			}
		}
	}
	for(i=0;i<k-1;i++){
		if(su[i+1]-su[i]==2){
			printf("%d %d\n",su[i],su[i+1]);t=1;
		}
	}
	if(t==0) printf("empty");

	return 0;
}

