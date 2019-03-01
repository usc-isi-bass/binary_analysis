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



int main(){
	int n,sum1=0,sum2=0;
	scanf("%d\n",&n);
	for(int i=1;i<=n;i++){
		if(i%7==0)
			sum1+=(i*i);
		else
			if((i%10)==7)
				sum1+=(i*i);
			else
				if((i/10)==7)
					sum1+=(i*i);
	}
	for(int i=1;i<=n;i++)
		sum2+=i*i;
	printf("%d\n",sum2-sum1);
	return 0;
}