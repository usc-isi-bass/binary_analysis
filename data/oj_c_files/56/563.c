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

int main(int argc, char* argv[])
{
	int i;
	scanf("%d",&i);
	if(i<10)
		printf("%d\n",i);
	if(i>10&&i<100)
	{
		i=i%10*10+i/10;
		printf("%d\n",i);
	}
	if(i>100&&i<1000)
	{
		i=i%10*100+i%100/10*10+i/100;
		printf("%d\n",i);
	}
	if(i>1000&&i<10000)
	{
		i=i%10*1000+i%1000%100/10*100+i%1000/100*10+i/1000;
		printf("%d\n",i);
	}
	if(i>10000&&i<99999)
	{
		i=i%10*10000+i%10000%1000%100/10*1000+i%10000%1000/100*100+i%10000/1000*10+i/10000;
		printf("%d\n",i);
	}
	return 0;
}
