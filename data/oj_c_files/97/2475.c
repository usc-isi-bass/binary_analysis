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
	int m,a[6]={0,0,0,0,0,0};
	cin>>m;
	int i;
	while(m>=100)
	{
		m-=100;
		a[0]++;
	}
	while(m<100&&m>=50)
	{
		m-=50;
		a[1]++;
	}
	while(m<50&&m>=20)
	{
		m-=20;
		a[2]++;
	}
	while(m<20&&m>=10)
	{
		m-=10;
		a[3]++;
	}
	while(m<10&&m>=5)
	{
		m-=5;
		a[4]++;
	}
	while(m<5&&m>0)
	{
		m-=1;
		a[5]++;
	}
	for(i=0;i<6;i++)
		cout<<a[i]<<endl;
	return 0;
}
