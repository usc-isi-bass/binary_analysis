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

int main()//?????
{
	int n,k,a[1000],q=0,w=0;//???? ???
	cin>>n>>k;
	for(int i=0;i<n;i++)//????
	{
		cin>>a[i];
	}
	do
	{
		for (int i=q+1;i<n;i++)//?????
		{
			if (a[q]+a[i]==k) 
			{
				cout<<"yes";
				w++;
				break;
			}
		}
		q++;
	}
	while (w!=1 && q<n-1);
	if (w==0) cout<<"no";
	return 0;//????
}

