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

int main(){
	int a[1000],i,j,n,k;
    while(1)
    {
	n=0;
	cin>>a[1];
	if (a[1]!=-1)
	{
	for(i=2;a[i-1]!=0;i++)
		cin>>a[i];
	for(j=1;j<i-1;j++)
		for(k=1;k<i-1;k++)
			if(a[k]==2*a[j])
				n=n+1;
	cout<<n<<endl;
	}
	else break;
	}
	return 0;}
