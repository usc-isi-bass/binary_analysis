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
	int k[100];
	int n=0;
	int i=0;
	int Max=0;
	int Max2=0;
	cin>>n;
	for (i=0;i<n;i++)
	{cin>>k[i];
	}
	for(i=0;i<n;i++)
	{if(k[i]>Max)
	Max=k[i];}
	for(i=0;i<n;i++)
	{if(k[i]<Max&&k[i]>Max2)
	Max2=k[i];}
	cout<<Max<<endl;
	cout<<Max2<<endl;
	return 0;



}
