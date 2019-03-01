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
	int y,m,md=0,d,day,i;
	scanf("%d%d%d",&y,&m,&d);
	int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    for (i=0;i<m-1;i++)
	{
		md=md+month[i];
	}
	day=md+d;
	printf("%d",day);
	return 0;
}