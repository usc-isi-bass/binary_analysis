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
	int n,i,max,min,e,k;
	i=0;
	k=1;
	scanf("%d\n",&n);
	int number[n];
	for(i=0;i<=n-1;i++){
		scanf("%d\n",&(number[i]));
	}
	for(k=1;k<=n;k++){
		for(i=0;i<=n-1-k;i++){
			if(number[i]>number[i+1]){
				e=number[i+1];
				number[i+1]=number[i];
				number[i]=e;
			}
		}
	}
	printf("%d\n%d\n",number[n-1],number[n-2]);
	return 0;
}