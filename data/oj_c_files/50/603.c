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
	int w,a[12]={13,44,72,103,133,164,194,225,256,286,317,347},i;
	scanf("%d",&w);
	for(i=0;i<12;i++){
		if(w==7&&a[i]%7+w-8==5)
			printf("%d\n",i+1);
		else if(w!=7&&a[i]%7+w-1==5)
			printf("%d\n",i+1);}
	return 0;
}
