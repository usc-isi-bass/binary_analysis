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
	int i,n,sum=0,c,d;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	    c=i%10;
		d=i/10;
		if(i%7==0)continue;
		if(d==7)continue;
		if(c==7)continue;
		sum+=i*i;
	}
		printf("%d",sum);
	return 0;
}