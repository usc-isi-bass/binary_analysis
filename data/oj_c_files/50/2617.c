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


int day(int w,int m)
{
	int n=0,a[11]={31,28,31,30,31,30,31,31,30,31,30},i;
	if(m>1){
		for(i=0;i<m-1;i++)
			n+=a[i];
	}
	n+=12;
	if((w+(n%7))%7==5)
		return 1;
	else
		return 0;
}

void main()
{
	int w,m;
	scanf("%d",&w);
	for(m=1;m<=12;m++){
		if(day(w,m))
			printf("%d\n",m);
	}
}