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

int main(){
	int money,i,num[6];
	scanf("%d",&money);
	num[0]=money/100;
	num[1]=(money-100*num[0])/50;
	num[2]=(money-100*num[0]-50*num[1])/20;
	num[3]=(money-100*num[0]-50*num[1]-20*num[2])/10;
	num[4]=(money-100*num[0]-50*num[1]-20*num[2]-10*num[3])/5;
	num[5]=money-100*num[0]-50*num[1]-20*num[2]-10*num[3]-5*num[4];
	for(i=0;i<6;i++)
	{
		printf("%d\n",num[i]);
	}
	return 0;
}