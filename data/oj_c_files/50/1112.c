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

int w,mon,ord;
int main()
{
	scanf("%d",&w);
	ord=13;
	mon=1;
	while(mon<=12)
	{
		if((ord%7==6-w)||(ord%7==13-w))
			printf("%d\n",mon);
		if(mon==1||mon==3||mon==5||mon==7||mon==8||mon==10||mon==12)
			ord+=31;
		if(mon==4||mon==6||mon==9||mon==11)
			ord+=30;
		if(mon==2)
			ord+=28;
		mon++;
	
	}
	return 0;
}
