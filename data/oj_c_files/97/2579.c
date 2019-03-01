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
	int money,change[6]={0},i,mon[6]={100,50,20,10,5,1},p;
	cin>>money;
	for(i=0;i<6;i++)
	{
		p=money;
		change[i]=money/mon[i];
		money=p-change[i]*mon[i];
	}
	for(i=0;i<6;i++)
	{
		cout<<change[i]<<endl;
	}
	return 0;
}