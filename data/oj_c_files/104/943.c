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

int  cnt_row(int a);								//??????()
int main()  										//???
{
	int x , y , i ,p;
	cin >> x >> y;						//???????x?y
	if(x<y)
	{
		int temp;
		temp=x;
		x=y;
		y=temp;
	}
	p=cnt_row(x)-cnt_row(y);			//???x?y?????????????
	for(i=0; i<p; i++)
		x=x/2;
	while(x!=y)							//xy???????????????????
	{
		if(x%2==0)
		   x=x/2;
		else
			x=(x-1)/2;
	if(y%2==0)
		   y=y/2;
		else
			y=(y-1)/2;
	}
	cout << x;
	return 0;
}
int cnt_row(int a)						//????x,y???????
{
	int cnt=0;
	while(a != 0)
	{
		a=a/2;
		cnt++;
	}
	return cnt;
}