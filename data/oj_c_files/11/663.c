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
	int DJT = 0;
    int D[12];
	D[0]=31;
	D[1]=28;
    D[2]=31;
    D[3]=30;
    D[4]=31;
    D[5]=30;
    D[6]=31;
    D[7]=31;
    D[8]=30;
    D[9]=31;
    D[10]=30;
    D[11]=31;
	int year, month, day;
	scanf("%d%d%d",&year,&month,&day);
	if(year%400==0)
		D[1] = D[1] +1;
	else if (year%100!=0&&year%4==0)
		D[1] = D[1] +1;
	else 
		D[1] = D[1];
	for(int i = 0;i<month-1;i++)
	    DJT = DJT + D[i];
    DJT = DJT + day;
	printf("%d\n",DJT);
    return 0;
}