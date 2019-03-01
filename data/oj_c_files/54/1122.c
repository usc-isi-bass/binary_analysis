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

long leastapple(long monkey,long thraway){
	long last=0,i;
	double least;
	while(1){
		last++;
		for(i=0;i<monkey;i++){
			if(i==0)
			{
				least=last*monkey+thraway;
			}else
			{
				least=least/(monkey-1)*monkey+thraway;
			}
			if(least-(long)least!=0)
			{
				break;
			}
		}
		if(i==monkey)
		{
			break;
		}
	}
	return least;
}
long main(long argc, char* argv[])
{
	long n,k;
	scanf("%ld %ld",&n,&k);
	printf("%ld",leastapple(n,k));
	return 0;
}