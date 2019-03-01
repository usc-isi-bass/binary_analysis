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
	int num,j,i,an[6]={100,50,20,10,5,1};
	cin>>num;
	cout<<num/an[0]<<endl;
	for(i=1;i<6;i++)
	{
	num=num-num/an[i-1]*an[i-1];
	cout<<num/an[i]<<endl;
	}
	return 0;
}