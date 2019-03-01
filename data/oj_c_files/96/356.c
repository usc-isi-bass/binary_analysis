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
	char a[100]={'\0'};
	int b[100],c[100];
	int i,k,p;
	for(i=0;i<100;i++) c[i]=11;
	cin>>a;
	k=strlen(a);
	for(i=0;i<k;i++)
	{
		a[i]=a[i]-48;
		b[i]=a[i];
	}
	if ((k<=2)&&(10*b[0]+b[1])<13) cout<<"0";
	for(i=0;i<k;i=i+1)
	{
			c[i]=(10*b[i]+b[i+1])/13;
			b[i+1]=(10*b[i]+b[i+1])%13;

	}
	for(p=0;c[p]==0;p++);
		while((c[p]>=0)&&(c[p]<10))
		{
			cout<<c[p];
			p++;
		}
		cout<<endl<<b[k-1];
		return 0;
}