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
	int shu,i,wei[5];
	scanf("%d\n",&shu);
	wei[0]=shu/10000;
	wei[1]=(shu-shu/10000*10000)/1000;
	wei[2]=(shu-shu/1000*1000)/100;
	wei[3]=(shu-shu/100*100)/10;
	wei[4]=(shu-shu/10*10);
	for(i=4;i>=0;i--)
	{
		if(wei[i]!=0)
	    printf("%d",wei[i]);
	}
}