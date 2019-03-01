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

int put(int m,int n)
{
	if(m==1||n==1||m==0)
		return 1;
	if(m<0||n==0)
		return 0;
		return 	put(m,n-1)+put(m-n,n);
	
}
int main()
{
	int t,M,N,i,sum;
	cin>>t;
	for(i=1;i<=t;i++)
		{
cin>>M>>N;
	    	cout<<put(M,N);
cout<<endl;
}
	return 0;
}
