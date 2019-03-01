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

/*
 * wanyi.cpp
 *
 *  Created on: 2012-11-20
 *      Author: 7
 */
int t=1;
void fen(int n,int i)
{
	for(i=i;i*i<=n;i++)
	{
		if(n%i==0)
		{
			fen(n/i,i);
			t++;
		}
	}
}
int main()
{
	int k;
	cin>>k;
	while(k--)
	{
		int n;
		cin>>n;
		t=1;
		fen(n,2);
		cout<<t<<endl;
	}
}
