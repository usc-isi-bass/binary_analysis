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

int f(int n)
{
	cin >> n;
	if (n%100==0)
	{
		if (n%400==0)
		return 1;
		else return 0;
	}
	else  if(n%4==0)
		return 1;
	else 
	 return 0;
}

int main()
{
	int y,m,d;
	cin >> y>>m>>d;
	int t=0,i;
	for(i=1;i<m;i++)
	{
		if (i==1||i==5||i==3||i==7||i==8||i==10)
		t=t+31;
		else if (i==2)
		t=t+28;
		else if (i==4 || i==6 || i==9 ||i==11)
		t=t+30;
	}
	t=t+d;
	if (f(y)==1 && m>2)
	t=t+1;
	cout <<t <<endl;
	return 0;
}