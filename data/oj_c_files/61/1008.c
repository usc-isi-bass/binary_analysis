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
	int a[20],b[10];
	int i,j,n;
	a[0]=1;
	a[1]=1;
	for(i=2;i<=19;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>j;
		b[i]=a[j-1];
		cout<<b[i]<<endl;
	}
	
	
	
	return 0;              
}             // ?????

