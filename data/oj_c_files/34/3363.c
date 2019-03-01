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


int proc(int i)
{
	int ans;
	if(i%2==1)
	{
		ans=i*3+1;
		printf("%d*3+1=",i);
	}
	else {
		ans=i/2;
		printf("%d/2=",i);
	}
	return ans;
}



int main () {
    int n;
	scanf("%d",&n);
	while (n>1) {
		n=proc(n);
		printf("%d\n",n);
	}
	printf("End");
    return 0;
}
