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

//????


int main()
{
	int n,high[100],low[100],count=0,time_max=0;  //?? ?? ?? ???? ??????
	cin>>n;
	for(int i=0;i<n;i++)                       //????
		cin>>high[i]>>low[i];
	for(int i=0;i<n;i++)
	{
		if(high[i]>=90&&high[i]<=140&&low[i]>=60&&low[i]<=90)    //?????????????+1
		{
			count+=1;
			if(i==n-1)
				time_max=(count>time_max)?count:time_max;
		}
		else                                                     //??????????????????????????
		{
			time_max=(count>time_max)?count:time_max;
			count=0;                                       //??????
		}
	}
		cout<<time_max<<endl;
	return 0;
}
