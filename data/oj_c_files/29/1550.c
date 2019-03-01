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

int main()//?????
{
	int m,n;//???m,n
	cin>>m;//??m
	for(int i=1;i<=m;i++)//????m?n
	{
		cin>>n;
		float a=1,b=2,s=0,t;//??????
		for(int j=1;j<=n;j++)//??
		{
			s=s+b/a;
			t=b;
			b=a+b;
			a=t;
		}
		printf("%.3f",s);//????
		cout<<endl;
	}
	return 0;//?????
}