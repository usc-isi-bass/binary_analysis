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

int p=0;

int factor(int a,int min)
{
	int sum=0;
	if(min>=a)return 1;
	for(int j=min;j<=a/min;j++)
	if (a%j==0)
		sum+=factor(a/j,j);
	return sum;
}

int main()
{
	int n=0,a=0;
	cin>>n;
	while(n>0)
	{
		cin>>a;
		if(a<=2) cout<<1<<endl;
		else cout<<factor(a,2)+1<<endl;
		n--;
	}
	return 0;
}