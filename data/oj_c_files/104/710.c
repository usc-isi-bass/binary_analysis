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

int f(int a,int n)
{
	if (n==1) return a;               //????
	else return f(a,n-1)/2;
}
int main()
{
	int a,b,i,j,t=1;
	cin>>a>>b;
	for (i=1;f(a,i)>=1;i++)
		for (j=1;f(b,j)>=1;j++)          //???????????
			if (f(a,i)==f(b,j))
			{
				t=(f(a,i)>t? f(a,i):t);         //????????????
				break;
			}
	cout << t <<endl;
	return 0;
}
