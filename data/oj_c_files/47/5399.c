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

	int i,n,j,t,a[100]={0};

	cin>>n;
	
	for(i=0;i<=n-1;i++)

		cin>>a[i];

	for(i=0;i<=(n-1)/2;i++)

	{
		
		t=a[i];

		a[i]=a[n-i-1];

		a[n-i-1]=t;

	}

	for(j=0;j<=n-2;j++)

		cout<<a[j]<<" ";

	cout<<a[n-1];

return 0;

}