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
	int n,p,count=0,n1,n2,i;
	cin>>n;
	for(i=1;i<=n*n;i++)
	{
		cin>>p;
 	    if(p==0&&count==0)
		{
		  n1=i	;count=1;
		}
		if(p==0&&count!=0){n2=i;}
	}
	cout<<(n2/n-n1/n-1)*(n2%n-n1%n-1);
	
	return 0;
}







