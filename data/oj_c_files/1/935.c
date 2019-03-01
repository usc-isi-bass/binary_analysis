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

int su(int input)//?????????
{
	int ju=1;
	for(int i=2;i<sqrt(input);i++)
	{
		if(input%i==0) ju=0;
		break;
	}
	return ju;
}
int fenjie(int input, int k)//k???????????input??????
{
	int ret=1;//re??????????????
	for(int i=k;i<=sqrt(input);i++)
	{
		if(input%i==0)
		{
			if(su(input/i)==0);//????????????????????
			{
				ret=fenjie(input/i,i)+ret;
			}
		}
	}
	return ret;
}
int main()
{
	int input,num,sol;
	cin>>num;
	while(num--)//????
	{
		cin>>input;
		cout<<fenjie(input,2)<<endl;//sol??????????
	}
	return 0;
}
