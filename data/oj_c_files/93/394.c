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
	int num=0;//??????NUM
	cin>>num;
	if(num%105==0)
	{
		cout<<"3 5 7";
	}
	if(num%15==0&&num%7!=0)
	{
		cout<<"3 5";
	}
	if(num%21==0&&num%5!=0)
	{
		cout<<"3 7";
	}
	if(num%35==0&&num%3!=0)
	{
		cout<<"5 7";
	}
	if(num%3==0&&num%5!=0&&num%7!=0)
	{
		cout<<"3";
	}
	if(num%3!=0&&num%5==0&&num%7!=0)
	{
		cout<<"5";
	}
	if(num%3!=0&&num%5!=0&&num%7==0)
	{
		cout<<"7";
	}	
	if(num%3!=0&&num%5!=0&&num%7!=0)
	{
		cout<<"n";
	}
	return 0;
}
