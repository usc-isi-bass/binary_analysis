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

//============================================================================
// Name        : 1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


int main() {
	int n;
	cin>>n;
	int n1=n;                       //n1???????????
	int a[n];
	for(int i=1;i<=n;i++)
		cin>>a[i];
	int b;
	cin>>b;
	int t=1;                        //t????????????????????????????????????
	for(int i=1;t<=n;i++)
	{
		if(a[t]==b)                 //???????
		{
			n1=n1-1;
			for(int j=t;j<=n;j=j+1)
				a[j]=a[j+1];
			t=t-1;                  //???????????????????????
		}
		t=t+1;
	}
	cout<<a[1];                     //?????????
	for(int i=2;i<=n1;i++)
		cout<<" "<<a[i];
	return 0;
}
