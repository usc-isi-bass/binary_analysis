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
	int b=0,n,c,i,a[5];
	cin>>n;
	if(n==0) {cout<<'0'<<endl;}
	else
	{
	for(i=0;n>0;i++)
		{c=n%10;
		a[i]=c;
		n=n/10;
		b+=1;}//???n?10????????,??n?10???????n
    for(i=0;i<b;i++)
	   cout<<a[i];
	cout<<endl;
	}
	return 0;
}
