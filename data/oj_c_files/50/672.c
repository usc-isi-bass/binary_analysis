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
    int a[12]={31,28,31,30,31,30,31,31,30,31,30,31},b[12]={0};
	int w,k;
	scanf("%d",&w);
	w+=12;
	for(int j=0;j<12;j++)
	{   
		if(w%7==5)
		{
			printf("%d\n",j+1);
		}
		w+=a[j];
	}
	    
	return 0;
}

