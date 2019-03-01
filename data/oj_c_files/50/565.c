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
	int i,d[100],y,a,w;
		int m[100]={31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d",&w);
	for(i=1;i<=12;i++){
		if (i==1)
			d[1]=12;
		if (i>=2){
			d[i]=d[i-1]+m[i-2];}
		}
		for(i=1;i<=12;i++){
			y=w-5;
			a=(d[i]+y)%7;
			if(a==0)
				printf("%d\n",i);
		}
		return 0;
	}