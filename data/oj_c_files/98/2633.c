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
	int n,l[500],*p,num=0,i;
	char a[500][41];
	cin>>n;
	cin.get();
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		l[i]=strlen(a[i]);
	}
	p=&l[1];
	for(i=1;i<=n;i++)
	{
		if(num==0)
		{
			cout<<a[i];
			num=(*p)+num+1;
			p++;
			continue;
		}
		num=num+(*p)+1;
		if(num<=81)
		{
			cout<<" "<<a[i];
			p++;
			continue;
		}
		if(num>81)
		{
			num=0;
			i--;
			cout<<endl;
			continue;
		}
	}
	return 0;
}