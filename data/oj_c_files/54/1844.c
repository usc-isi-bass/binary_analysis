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

	int a[100]={0},m,n,k,i;

	cin>>n>>k;

	a[n]=n+k;
	
	for(a[n]=n+k;;a[n]=a[n]+n)

	{
	
	 for(i=n;i>=2;i--)

	 {
		 
		 if(a[i]%(n-1)!=0)

			break;
		
		a[i-1]=a[i]*n/(n-1)+k;

	 }

     if(a[1]==0)

		 continue;

	 else

		 break;

	}

	cout<<a[1];

	return 0;

}