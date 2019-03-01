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

main()
{
	int y,m,day,tot=0,i;
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};

	scanf("%d %d %d",&y,&m,&day);
	if ((y%400==0)||((y%4==0)&&(y%100!=0))) a[1]++;
    for (i=0;i<m-1;i++)
    tot+=a[i];
	tot+=day;
	printf("%d\n",tot);
	return 0;
}