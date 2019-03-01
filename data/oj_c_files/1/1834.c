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

int t=0,ways;  //??????t?ways
void divide(int x,int h)
{
	int i;
	if(x==1)  //??x==1
	{t++;ways=t;}  //t+1?ways?????t
	else
		for(i=h;i<=x;i++)
			if(x%i==0)
				{h=i;
				divide(x/h,h);  //h?????????????divide?????????
				}
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{cin>>a[i];
	t=0;divide(a[i],2);
	cout<<ways<<endl;}
	return 0;
}