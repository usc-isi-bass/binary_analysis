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

/**************
*?????
*?????
***************/
int f1(int m, int n); //m???? n???
int main()
{
	int t, m, n;    //t???
	cin >> t;
	for(int i=0; i < t; i++)
	{
		cin >> m >> n;
		cout<<f1(m,n)<<endl;//????
	}
return 0;
}
int f1(int m, int n)
{
	if(n == 1 || ((m < n)&&(m==0||m==1)))       //??????
	{
		return 1;
	}
	else            //?????????
	{
		if(m >= n)
		{
			return f1(m,n-1)+f1(m-n,n);
		}
		else
		{
			return f1(m,m);
		}
	}
}