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
	int n,m,sum,i,j;          //????
	int a[20];                //????????????????????
	cin>>n;                   //???????
	for (i=1;i<=n;i++)        //????????????????????
	{
		sum=60;               //???sum????60
		cin>>m;               //??????m
		for (j=1;j<=m;j++)    //????????m?????
		{
			cin>>a[j];                    //???j????????
			if (a[j]+3*(j-1)<57)          //??????????57???sum=60-3*????
				sum=60-3*j;
			else if (a[j]+3*(j-1)>=60)    //?????60?????????sum??
				continue;
			else                          //????57?58?59???sum??a[j]
				sum=a[j];
		}
		cout<<sum<<endl;                  //????
	}
	return 0;
}
