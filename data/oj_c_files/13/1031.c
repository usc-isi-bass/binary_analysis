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
	int a[20001]={0};
	int n,i,j,k;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(a[j]==a[i])
			{	for(k=j;k<n-1;k++)
					 a[k]=a[k+1];
			j=j-1;
			n=n-1;
			}


    for(i=0;i<n-1;i++)
	      cout<<a[i]<<" ";
	cout<<a[n-1]<<endl;

return 0;
}
