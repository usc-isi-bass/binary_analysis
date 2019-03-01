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

/*
*?????
*??
*2011?11?06?
*?????
*/
int main()
{
	int num[6],money;//num[6]????????
	cin>>money;
	num[0]=(money-money%100)/100;
	num[1]=(money-100*num[0])/50;
	num[2]=(money-100*num[0]-50*num[1])/20;
	num[3]=(money-100*num[0]-50*num[1]-20*num[2])/10;
	num[4]=(money-100*num[0]-50*num[1]-20*num[2]-10*num[3])/5;
	num[5]=(money-100*num[0]-50*num[1]-20*num[2]-10*num[3]-5*num[4]);
	for(int i=0;i<6;i++)
		cout<<num[i]<<endl;//????????
	return 0;
}
