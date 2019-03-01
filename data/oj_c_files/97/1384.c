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
	int n;
	int SZ[6];
	scanf("%d",&n);
	SZ[0]=n/100;
	SZ[1]=n%100/50;
	SZ[2]=(n%100-SZ[1]*50)/20;
    SZ[3]=(n%100-SZ[1]*50-SZ[2]*20)/10;
	SZ[4]=n%10/5;
	SZ[5]=n%10-SZ[4]*5;
    for(int i=0;i<6;i++)
	{
		printf("%d\n",SZ[i]);
	}
	return 0;
}