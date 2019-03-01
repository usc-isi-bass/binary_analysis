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
	int n,length=0,l;
	cin>>n;
	char a[1000][40];
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for (int i=0;i<n;i++)
	{
		l=strlen(a[i]);
		if (i==n-1)
		{	cout<<a[i]<<endl;
		break;}
		if (length+l+1+strlen(a[i+1])<=80)
		{
			cout<<a[i];
			cout<<' ';
			length+=l+1;
		}
		else 
		{
			cout<<a[i];
			cout<<endl;
			length=0;
		}
		
	}








	return 0;
}