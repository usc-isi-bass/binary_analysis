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
	long int m[4],n[4],i;
	for(i=0;i<4;i++)scanf("%ld",&m[i]);
	for(i=0;i<4;i++)
	{
		if(m[i]<=9&&m[i]>=0)n[i]=m[i];
		else if(m[i]>=10&&m[i]<=99)n[i]=(m[i]%10)*10+(m[i]-m[i]%10)/10;
		else if(m[i]>=100&&m[i]<=999)n[i]=(m[i]%10)*100+m[i]%100-m[i]%10+(m[i]-m[i]%100)/100;
		else if(m[i]>=1000&&m[i]<=9999)n[i]=(m[i]%10)*1000+(m[i]%100-m[i]%10)*10+(m[i]%1000-m[i]%100)/10+(m[i]-m[i]%1000)/1000;
		else if(m[i]>=10000&&m[i]<=99999)n[i]=(m[i]%10)*10000+(m[i]%100-m[i]%10)*100+(m[i]%1000-m[i]%100)+(m[i]%10000-m[i]%1000)/100+(m[i]-m[i]%10000)/10000;
		else n[i]=0;
	}
	for(i=0;i<4;i++)printf("%ld\n",n[i]);
	return 0;
}
