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
	int mon[12]={0,31,28,31,30,31,30,31,31,30,31,30};
	int imon[12]={0};
	int w;
	cin>>w;
	int i;
	int j = 0;
	int d,id=0;
	int s = 0;
	switch(w)
	{
		case 7:s = 5;break;
		case 6:s = 6;break;
		case 5:s = 0;break;
		case 4:s = 1;break;
		case 3:s = 2;break;
		case 2:s = 3;break;
		default:s = 4;break;
	}
	for(i = 0;i < 12;i++)
	{
		id += mon[i];
		d = id + 13 - 1;
		if((d % 7) == s)
		{
			imon[j]=i+1;
			j++;
		}
	}
	for(i=0;i<j;i++)
		cout<<imon[i]<<endl;
	return 0;
}