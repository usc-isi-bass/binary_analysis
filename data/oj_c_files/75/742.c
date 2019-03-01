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
	int in[1000],out[1000];
	int num=1,time=0,ma=0,s=0;
	while(1)
	{
		cin>>in[num];
		if(getchar()=='\n')
		{
			break;
		}
		else
		{
			num++;
		}
	}
	num=1;
	while(1)
	{
		cin>>out[num];
		if(getchar()=='\n')
		{
			break;
		}
		else
		{
			num++;
		}
	}
	for(time=1;time<=1000;time++)
	{
		s=0;
		for(int i=1;i<=num;i++)
			if(in[i]<=time&&out[i]>time)
				s++;
		if(ma<s)
			ma=s;
	}
	cout<<num<<" "<<ma<<endl;
	return 0;
}