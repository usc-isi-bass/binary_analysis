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
	int n,i,sz[12];
	scanf("%d",&n);
	sz[0]=n+13-1;
	sz[1]=sz[0]+31;
	sz[2]=sz[1]+28;
	sz[3]=sz[2]+31;
	sz[4]=sz[3]+30;
	sz[5]=sz[4]+31;
	sz[6]=sz[5]+30;
	sz[7]=sz[6]+31;
	sz[8]=sz[7]+31;
	sz[9]=sz[8]+30;
	sz[10]=sz[9]+31;
	sz[11]=sz[10]+30;
	for(i=0;i<12;i++)
	{
		if(sz[i]%7==5)
		{
		 printf("%d\n",i+1);
		}
	}
	return 0;
}