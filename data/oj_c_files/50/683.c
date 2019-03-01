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
	int days[12]={13,44,72,103,133,164,194,225,256,286,317,347};
	int i,w;
         scanf("%d",&w);
	for(i=0;i<12;i++){
		if(days[i]%7+w==6||days[i]%7+w==13){
			printf("%d\n",i+1);
		}
	}
		return 0;
}
