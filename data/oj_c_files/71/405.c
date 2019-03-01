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
	int m[13]={0,31,28,31,30,31,30,31,31,30,31,30,31},n,i,a,b,c,d,e,j,x=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a>>b>>c;
m[2]=28;
		if((a%4==0&&a%100!=0)||a%400==0)
		 m[2]=29;
		
		d=(b<c)?b:c;
		e=(b>c)?b:c;
		x=0;
		for(j=d;j<e;j++)
		x=x+m[j];
		
		if(x%7==0) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
		