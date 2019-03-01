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
	int a[200],b[200],c[200],i,j,m,k;
	cin>>m;
	for(i=0;i<m;i++)
		cin>>a[i]>>b[i]>>c[i];
	int d[12]={3,0,3,2,3,2,3,3,2,3,2,3};
	int e[200],f[200];
	for(i=0;i<m;i++)
		if (b[i]>=c[i]){e[i]=b[i];f[i]=c[i];}
		else{e[i]=c[i];f[i]=b[i];}
	for(i=0;i<m;i++)
	{
		k=0;
		if((a[i]%4==0&&a[i]%100!=0)||a[i]%400==0) d[1]=1;
	    else d[1]=0;
		for(j=f[i];j<e[i];j++)
			k=k+d[j-1];
		if(k%7==0)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}