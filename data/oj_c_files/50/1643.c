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
	int xingqi,yue,zong=0,panduan;
	scanf("%d",&xingqi);
	for(yue=1;yue<13;yue++){
		panduan=(zong+12)%7+xingqi;
		if(panduan>7)
			panduan=panduan-7;
		if(panduan==5)
			printf("%d\n",yue);
		if(yue==1||yue==3||yue==5||yue==7||yue==8||yue==10||yue==12)
			zong=zong+31;
		else if(yue==4||yue==6||yue==9||yue==11)
			zong=zong+30;
		else if(yue==2)
			zong=zong+28;
	}
	return 0;
}