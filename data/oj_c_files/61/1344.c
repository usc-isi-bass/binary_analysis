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
 * ????Fibonacci Sequence.cpp
 * ??????
 * ????: 2012-11-5
 * ??:??????????a??????
 */

int main(){
	int n,a[21],Fibonacci[21],i,k;
	cin >> n;
	for (k=1;k<=n;k++)          //????a????a[i]??
		cin >> a[k];
	Fibonacci[1]=1;
	Fibonacci[2]=1;
	for(i=3;i<=20;i++)
		Fibonacci[i]=Fibonacci[i-1]+Fibonacci[i-2];       //Fibonacci???????????
	for (k=1;k<=n;k++)
	cout << Fibonacci[a[k]] << endl;            //?????????
	return 0;
}
