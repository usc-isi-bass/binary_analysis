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

double monkey(double m,double n,double k)
{
	m=(m/(n-1))*n+k;
	return(m);
}
int main()
{
	double i,j=1,n,k,m;
	cin>>n>>k;
	do
	{
		m=(n-1)*j;
		for(i=0;i<n;i++)
		{
			m=monkey(m,n,k);
			if(m-(int)m!=0)
				break;
		}
		j++;
	}while(m-(int)m!=0);
	cout<<(int)m<<endl;
	return 0;
}