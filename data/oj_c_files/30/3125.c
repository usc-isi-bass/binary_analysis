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
	int n,a;
	int i=1;
	int result=0;
	scanf("%d",&n);
	while(i<=n){
		a=(i/10)%10;
		if((!(i%7==0))&&(!(i%10==7))&&(!(a==7))){
			result+=i*i;
		}
		i++;
	}
	printf("%d\n",result);
	return 0;
}

