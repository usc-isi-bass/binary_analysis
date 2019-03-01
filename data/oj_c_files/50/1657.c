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




int  main( )
{
	int i,n,w,xq[13];
	n=0;
	scanf("%d",&w);
	n+=w-1;
	xq[1]=13;
	xq[2]=31+13;
	xq[3]=31+28+13;
	xq[4]=31+28+31+13;
	xq[5]=31+28+31+30+13;
	xq[6]=31+28+31+30+31+13;
	xq[7]=31+28+31+30+31+30+13;
	xq[8]=31+28+31+30+31+30+31+13;
	xq[9]=31+28+31+30+31+30+31+31+13;
	xq[10]=31+28+31+30+31+30+31+31+30+13;
	xq[11]=31+28+31+30+31+30+31+31+30+31+13;
	xq[12]=31+28+31+30+31+30+31+31+30+31+30+13;
	for(i=1;i<13;i++){
		xq[i]+=n;
		if(xq[i]%7==5){
			printf("%d\n",i);
		}
	}
	return 0;
}

