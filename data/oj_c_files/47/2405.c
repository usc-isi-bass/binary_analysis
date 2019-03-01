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

int main( )
{
	int s[100]={0};
	int n,i,a;
	cin>>n; //??n
	for(i=0;i<n;i++)//????
	{
		cin>>a;
		s[i]=a;
	}
	i=n-1;
	a=0;
	while (i>=0)//????
	{
		if(a==0)
		{
				cout<<s[i];
				a=1;
		}
		else cout<<" "<<s[i];//?????????
		i=i-1;
	}
		return 0;
}