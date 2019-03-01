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



int digui(int m,int n,int sum)
{
	int i;
	sum++;
	if(sqrt(m)<n)
		return sum;
	else{
		for(i=n;i<=sqrt(m);i++){
			if(m%i==0)
				sum=digui(m/i,i,sum);
		}
		return sum;
	}
}

void main()
{
	int n,a;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&a);
		printf("%d\n",digui(a,2,0));
	}
}