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

int main(int argc, char* argv[])
{
	int a[12]={13,44,72,103,133,164,194,225,256,286,317,347};
	int n;
	scanf("%d",&n);
	int i;
	for(i=0;i<12;i++){
		if((a[i]-1+n)%7==5)
			printf("%d\n",i+1);
	}
	
	
	return 0;
}

