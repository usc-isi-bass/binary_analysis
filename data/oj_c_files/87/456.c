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
	int a,b,c,d,e,f;
	long s;
	while((scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f))&&(a!=0))
	{
		s=d*3600+e*60+f;
		if((b==0)&&(c==0))
			s+=(12-a)*3600;
		else
			if(c==0)
				s+=(11-a)*3600+(60-b)*60;
			else
				s+=(11-a)*3600+(59-b)*60+60-c;
		printf("%ld\n",s);
	}
	return 0;
}