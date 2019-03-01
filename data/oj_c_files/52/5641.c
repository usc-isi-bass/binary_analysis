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

//????
int main()
{
	int n,m,A[100],a=0;
	cin>>n>>m;
	int *p=A;
	for(int i=0;i<n;i++)
	{
	    cin>>*(p+i);
	}
	for(int i=0;i<m;i++)
	{
		a=*(p+n-1);
		for(int j=n-1;j>0;j--)
		{
			*(p+j)=*(p+j-1);
		}
		*p=a;
	}
	for(int i=0;i<n;i++)
	{
		if(i==0)
			cout<<*(p+i);
		else
	        cout<<" "<<*(p+i);
	}
	return 0;
}