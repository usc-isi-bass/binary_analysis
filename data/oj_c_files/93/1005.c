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

int op(int n,int i)//????,???????????
{
	if(i==1) cout<<" ";
	cout<<n;
	return 0;
}

int main()
{
	int n;//n???????
	int i=0;//i?????????????
	cin>>n;
	for (int k=3;k<=7;k+=2)//???????????k??
	{
		if (n%k==0) 
		{
			op(k,i);
			i=1;
		}
	}
	if (i==0) cout<<'n';//??????,??n
	return 0;
}
