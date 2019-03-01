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
	int a[500],n,r,t=0;
	cin>>n;
	for(int i =0; i<=n-1;i++)
		cin >>a[i];

	for(int p =0; p<n-1;p++)
		for(int q =n-1;q>p;q--)
		{
			if(a[q]<a[q-1])
			{
				t=a[q];
				a[q]=a[q-1];
				a[q-1]=t;
			}
		}

if(a[0]%2!=0)
		cout<<a[0];
	for(int j = 1;j<=n-1;j++)
		if(a[j]%2!=0)
			cout <<","<<a[j];
	if(a[0]%2==0)
		for(int y =1; y<=n-1;y++)
			if(a[y]%2!=0)
			{	cout<<a[y];r=y;}
			     
			for(int m =r+1;m<=n-1;m++)
				if(a[m]%2!=0)
					cout <<","<< a[m];

				return 0;
}
