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

//********************************
//* Name:????                *
//* Authur:sunzeyu               *
//* Editting time:2013.10.19     *
//* Function:????            *
//********************************
int main()
{
	int a[5],n,i,k=0;
	cin>>n;
	for(i=0;i<5;i++)
	{
		a[i]=n%10;
		n=n/10;
	}
	for(i=4;i>=0;i--)
		if(a[i]!=0)
		{
			k=i;
		    break;
		}
	for(i=0;i<=k;i++)
		cout<<a[i];
	cout<<endl;
	return 0;
}