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
	while(1){
		int a,b,c,d,e,f;
	    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
		if(a==0)
			return 0;
		else
			printf("%d\n",3600*(12+d-a)+(e-b)*60+f-c);
	}

	return 0;
}