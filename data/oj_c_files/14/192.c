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
 * ???: 1000010191_38_1.cpp
 * ??: ???
 * ????: 2010-12-31
 * ??: ????????
 */


struct student //??
{
	int id; //??
	int x,y; //???????
	int s; //??
} d[100001],t;

int main()
{
	//????
	int n;
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		cin>>d[i].id>>d[i].x>>d[i].y;
		//???
		d[i].s=d[i].x+d[i].y;
	}
	//??
	for (int i=1;i<=3;i++)
		for (int j=1;j<=n-i;j++)
			if (d[j].s>=d[j+1].s)
			{
				t=d[j];
				d[j]=d[j+1];
				d[j+1]=t;
			}
	//????
	for (int i=n;i>=n-2;i--)
		cout<<d[i].id<<' '<<d[i].s<<endl;
	return 0;
}
