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

int t,m,n;
int K(int a,int b,int c)
{
	int count=0;
	if (a==n-1&&b<=c) 
		return 1;
	for (int i=b;i<=(c/(n-a));i++)
		count+=K(a+1,i,c-i);
	return count;
}
int main()
{
	cin>>t;
	for(int i=1;i<=t;++i){
		cin>>m>>n;
	cout<<K(0,0,m)<<endl;
	}
	return 0;
}