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
	int n,k,i,a,t,out;
	int s[1000]={0,0};
	i=0;
	cin>>n>>k; 
	while(i<n)  //????
	{
		cin>>a;
		s[i]=a;
		i=i+1;
	}
	i=0;
	out=0;  //?????????
	while(i<n)
	{
		t=i+1;
		while(t<=n)
		{
			if((s[i]+s[t])==k)
				{
					cout<<"yes";
					out=1;  //?1??????????????
					break;
				}
			else t=t+1;
		}
		if(out==1)
			break;
		else i=i+1;
	}
	if (i>=n)
		cout<<"no";
			return 0;


}