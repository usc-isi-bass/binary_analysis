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

int f(int x,int y)
{
	int s=0,i;
	for(i=y;i>1;i--)//???????????
	{
		if(x%i==0)
			s+=f(x/i,i);//i?x/i????????1
	}
	if(x==1)
		return 1;
	return s;
}
int main()
{
	int n,i,a[50];
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>a[i];
	for(i=1;i<=n;i++)
		cout<<f(a[i],a[i])<<endl;
	return 0;
}