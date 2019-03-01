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
 * main.cpp
 *
 *  Created on: 2012-11-12
 *      Author: ??
 * 1090 ????

 */


int sum;
int a[100];
void search(int t,int k)
{
	int i;
	if (k==1) sum++;
	else
	for (i=a[t-1];i<=k;i++)
		if (k%i==0) {a[t]=i;search(t+1,k/i);}
}

int main()
{
	int n,i,k;
	cin>>n;
	for (i=1;i<=n;i++)
	{
		cin>>k;
		sum=0;
		a[0]=2;
		search(1,k);
		cout<<sum<<endl;
	}
	return 0;
}
