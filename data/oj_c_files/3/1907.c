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

int main()//???
{
	int n,k,shu[1000],m;//????
	cin>>n>>k;//??n k
	cout<<endl;
	for(int i=1;i<n;i++)//????
		cin>>shu[i];
	for(int i=1;i<n;i++)//???i??
		for(int j=i+1;j<=n;j++)//??i????
		{
			m=shu[i]+shu[j];//??
			if(m==k)
				{
					cout<<"yes";
					j=n+1;//????
					i=n+1;
			     }
			else if(i==n-1&&j==n)
				cout<<"no";
         }
		return 0;
}