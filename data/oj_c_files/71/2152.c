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

//??(10.5) ???
int main()
{
	int n,y,m1,m2,i,j,sum,t;
	int x[24]={31,28,31,30,31,30,31,31,30,31,30,31,
	31,29,31,30,31,30,31,31,30,31,30,31};             //x?????????
	cin>>n;
	for (i=0;i<=n-1;i++)                              //????????????
	{
		sum=0;
		cin>>y>>m1>>m2;
		if (m1>m2)                                    //?m1>m2???
		{
			t=m1;
			m1=m2;
			m2=t;
		}
		if ((y%4==0&&y%100!=0)||y%400==0)             //???????x??12???
			for (j=11+m1;j<=10+m2;j++)
				sum+=x[j];
		else                                          //????x??12?????
			for (j=m1-1;j<=m2-2;j++)
				sum+=x[j];
		if (sum%7==0)                                 //????
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}