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

int num=0;
void yinshu(int x,int y)
{
	if (x==y) num++;
	else if ((x%y==0)&&(x>y)) {yinshu(x/y,y);yinshu(x,y+1);}
	else if (x>y) yinshu(x,y+1);
}
int main()
{
	int n,x;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
	yinshu(x,2);
	cout<<num<<endl;
	num=0;
	}
}
