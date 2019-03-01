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

void main()
{
	int m[5],n,i;
	scanf("%d",&n);
	for(i=0;i<5;i++)
	{
	    m[0]=n/10000;
 	    m[1]=n/1000-10*m[0];
	    m[2]=n/100-100*m[0]-10*m[1];
	    m[3]=n/10-1000*m[0]-100*m[1]-10*m[2];
	    m[4]=n-10000*m[0]-1000*m[1]-100*m[2]-10*m[3];
	}
	for(i=4;i>=0;i--)
	{
		if(m[i]!=0)
		    printf("%d",m[i]);
	}
}