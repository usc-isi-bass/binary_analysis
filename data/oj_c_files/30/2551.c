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

	int n,a,i;
	a=0;
	i=0;
	scanf("%d",&n);

	while(i<n){
		i++;
		
		if((i%7==0)||(i/10==7)||(i-(i/10)*10==7))
		continue;
            a+=i*i;
		
	}
	

	printf("%d",a);
	return 0;
}