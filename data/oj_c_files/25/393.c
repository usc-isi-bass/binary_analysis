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

//#include "stdafx.h"

int lena=0;
void cheng(int *a)
{
	for (int i=0;i<lena;i++)
	{
		a[i]=a[i]*2;
		
	}
	for (int i=0;i<lena;i++)
	{
		a[i+1]+=a[i]/10;
		a[i]=a[i]%10;
	}
	if (a[lena]>0) lena++;
	//cout<<lena;
}
int main()
//int _tmain(int argc, _TCHAR* argv[])
{
	int a[10000]={1};
	int n;
	lena=1;
	cin>>n;
	for (int i=0;i<n;i++)
		
	cheng(a);
	for (int i=lena-1;i>=0;i--)
		cout<<a[i];
	cout<<endl;
	
}