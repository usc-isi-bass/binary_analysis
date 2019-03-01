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
	int n,k,mon[100],i,q;
	cin>>n;
	cin>>k;
	mon[n]=k;
	i=n;
	do
	{
		mon[n]=mon[n]+n;
		for(i=n-1;i>=1;i--)
		{
			if(mon[i+1]%(n-1)!=0)
			break;
			else
			mon[i]=n*mon[i+1]/(n-1)+k;
		}
	}while(i>=1);
	cout<<mon[1];
	cin>>q;
	return 0;
	
}