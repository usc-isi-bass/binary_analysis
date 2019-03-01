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
	int n, i, sum=0;
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		if(i%7==0||(i>=17&&(i-7)%10==0)||(i>=70&&i<=79))
			continue;
		else 
			sum+=i*i;
	}
	printf("%d",sum);
	return 0;
}