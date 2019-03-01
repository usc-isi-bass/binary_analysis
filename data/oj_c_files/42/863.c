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
	int n,k,i;
	cin>>n;//??n 
	int a[n];
	for(i=0;i<n;i++)//??a[n] 
		cin>>a[i];
	cin>>k;//??????? 
	int m=0,j;
	for(i=0;i<n-m;i++)
		if(a[i]==k)
			{for(j=i;j<(n-1-m);j++)
				a[j]=a[j+1];
				m++;
	           i--;}
				
	for(i=0;i<(n-m-1);i++)
		cout<<a[i]<<' ';
cout<<a[n-m-1];
  cin.get(); cin.get(); cin.get();
	return 0;
}