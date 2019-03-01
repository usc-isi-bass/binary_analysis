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
	int money,bz[6]={100,50,20,10,5,1},y,i,num[6];
	cin>>money;
	y=money;
	for(i=0;i<6;i++)
	{
		if(y<bz[i])
		{
			num[i]=0;
			continue;
		}
		else
		{
            num[i]=(y/bz[i]);
			y=y%bz[i];
		}
	}
	for(i=0;i<6;i++)
	{
		cout<<num[i]<<endl;
	}
	return 0;
}
