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

/*
hw.cpp
????yang?
?????????
???11.3
*/
int main()
{
	int n,a[500],s=0,x;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		if(x%2==1)
		{
			a[s]=x;
			s++;
		}
	}//???????????????a[]????s??
	for(int i=0;i<s-1;i++)
	{
		for(int j=i+1;j<s;j++)
		{
			if(i<j&&a[i]>a[j])
			{
				int swi=a[i];
				a[i]=a[j];
				a[j]=swi;
			}
		}
	}//?a[]??
	cout<<a[0];
	for(int i=1;i<s;i++)
	{
		cout<<","<<a[i];
	}//?????
	return 0;
}