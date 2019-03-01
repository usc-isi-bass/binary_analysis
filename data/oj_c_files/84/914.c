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
	int n,i,max=0,secondmax=0;
	scanf("%d",&n);
	int num[100]={0};
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	for(i=0;i<n;i++){
		if(max<num[i])
			max=num[i];
	}
	for(i=0;i<n;i++){
		if(secondmax>=num[i])
			secondmax=secondmax;
		else if(num[i]==max)
	        secondmax=secondmax;
		else
			secondmax=num[i];
	}
	printf("%d\n%d\n",max,secondmax);
	return 0;
}

