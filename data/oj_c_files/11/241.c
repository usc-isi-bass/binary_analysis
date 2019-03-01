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
    int i,p,n[5]={0},year[5],month[5],day[5],days[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    for(i=0;i<5;i++)
	{
	scanf("%d%d%d",&year[i],&month[i],&day[i]);
    if ((year[i]%4==0&&year[i]%100!=0)||year[i]%400==0) days[2]=29;
	else days[2]=28;
    for(p=0;p<month[i];p++)
		n[i]=n[i]+days[p];
	n[i]=n[i]+day[i];
	}
    for(i=0;i<5;i++)
	printf("%d\n",n[i]);
	return 0;
}
