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
	int n,a[101],i,j=1,k,sum=0;
	a[0]=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
	  if(((n-i)%7!=0)&&((n-i)%10!=7)&&(((n-i)<70)||((n-i)>79))) 
		{ a[j]=n-i;
		  j++;
		}
	}
	for(k=1;k<j;k++)
		sum+=a[k]*a[k];
	cout<<sum;
	return 0;
}


	

