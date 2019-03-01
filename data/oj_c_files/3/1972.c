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

int main()
{
	int n,k,i,p,q,sum,s=0;           //??????
	int a[1000];                     //?????? 
	cin>>n>>k;                       //??n,k   
	for(i=0;i<n;i++)                 //????a[1000]
		cin>>a[i];
	for(p=1;p<n;p++)                //?????
		for(q=0;q<p;q++)
		{
			sum=a[p]+a[q];
			if(sum==k)
				s=s+1;
		}
	if(s)                           //?????
		cout<<"yes"<<endl;
	else
		cout<<"no"<<endl;
	return 0;
}

				