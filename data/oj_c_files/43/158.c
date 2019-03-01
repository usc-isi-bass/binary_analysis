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

int panduan (int n);
int main()
{
	int m,i,t=0;
	cin>>m;
	for (i=3;i*2<=m;i++)
	{
		t=0;
		if (i%2!=0&&(m-i)%2!=0)
		{
			t=panduan(i)+panduan(m-i);
			if (t==2)
				cout<<i<<" "<<m-i<<endl;
		}
	}
	return 0;
}

int panduan (int n)
{
	int j;
	for (j=2;j*j<=n;j++)
	{
		if (n%j==0)
			break;
	}
	if (j*j>n)
		return 1;
	else
		return 0;
}



