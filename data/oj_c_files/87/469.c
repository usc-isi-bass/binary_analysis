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
	int h1,m1,s1,h2,m2,s2,s;
	for(;;)
	{
	scanf("%d %d %d %d %d %d",&h1,&m1,&s1,&h2,&m2,&s2);
	if(h1==0 && m1 == 0 && s1==0) break;
	s=(h2+12-h1)*3600+(m2-m1)*60+s2-s1;
	printf("%d\n",s);
	}
}
