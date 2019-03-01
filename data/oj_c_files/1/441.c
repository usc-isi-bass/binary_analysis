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

void TRY(int,int);
int num=1;
int main()
{
	unsigned short int n;
	int INTEGER;
	cin>>n;
	while(n-->0)
	{
		cin>>INTEGER;
		int h=2;
		TRY(h,INTEGER);
		cout<<num<<endl;
		num=1;
	}
}
void TRY(int a,int b)
{
	int i;
	for(i=a;i<=sqrt(b);i++)
	{
		if((b%i==0)&&(b/i!=1))
		{
			num++;
			TRY(i,b/i);
		}
	}
}