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
    int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int y,m,d,sum=0,i,h;
	scanf("%d%d%d",&y,&m,&d);
	if(y%4==0&&y%100!=0||y%400==0)
	{
		days[1]=29;
	}
	else
	{
		days[1]=28;
	}
	for(i=0;i<m-1;i++)
	{
		sum=sum+days[i];
	}
    h=sum+d;
	printf("%d",h);
	return 0;
}