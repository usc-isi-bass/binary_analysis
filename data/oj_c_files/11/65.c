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
	int yy,mm,dd,m=0,days=0;
	scanf("%d%d%d",&yy,&mm,&dd);
    do{
		if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)days=days+31;
		else if(m==4||m==6||m==9||m==11)days=days+30;
		else if((((yy%4==0&&yy%100!=0)||yy%400==0))&&m==2)days=days+29;
		else if((yy%4!=0||yy%100==0)&&m==2)days=days+28;
		m++;
	}while(m<mm);
	days=days+dd;
	printf("%d\n",days);
	return 0;
}