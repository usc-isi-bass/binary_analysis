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
	int num[1000]={0},k=0,i=0,j=0,s=0;
	num[0]=1;
	cin>>k;
	for(i=0;i<k;i++)
	{
		for(j=0;j<1000;j++)
			num[j]*=2;
		for(j=0;j<1000;j++)
		{
			num[j+1]+=num[j]/10;
			num[j]=num[j]%10;
		}
	}
	for(i=999;i>=0;i--)
	{
		if(num[i]!=0)s++;
		if(s>0)cout<<num[i];
	}
	return 0;
}