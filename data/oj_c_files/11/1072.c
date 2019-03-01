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

int leap(int y)
{
		if (
		   (y%100==0)&&(y%400==0)
		   ||
					(y%100!=0)&&(y%4==0)
					)
				return 1; else return 0;
}

int days(int y,int d,int r)
{
		int a[13]={0,0,31,28,31,30,31,30,31,31,30,31,30};
		if (leap(y)) a[3]=29;
		int ans=0;
		for (int i=1;i<=d;i++) ans+=a[i];
		return ans+r;
}
int main()
{
	int y,d,r;
	cin>>y>>d>>r;
	//if (leapyear(y)) cout<<'N'; else cout<<'N';
	cout<<days(y,d,r);
}
