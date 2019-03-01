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
	int f,i,j,n;
	scanf("%d",&n);
	if(n==1){
		printf("End\n");
		return 0;
	}
	do{
		if(n>1&&n%2!=0){
			f=(n*3)+1;
			printf("%d*3+1=%d\n",n,f);
			n=(n*3)+1;
		}
		if(n>1&&(n%2)==0){
			f=n/2;
			printf("%d/2=%d\n",n,f);
			n=n/2;
		}
	}while(n>1);
	printf("End\n");
	return 0;
}

