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
	int n=0;
	cin>>n;
	int i=n,a[100]={0};
	int *p=NULL,b;
	p=a;
	while(i>0)
	{
		cin>>*p;
		p++;
		i--;
	}
	p=a;
	for(i=0;i<n/2;i++)//?
	{
		b=*(p+i);
		*(p+i)=*(p+n-i-1);
		*(p+n-i-1)=b;
	}
	i=n-1;
	cout<<*p;
	p++;
	while(i>0)
	{
		cout<<" "<<*p;
		p++;
		i--;
	}

	return 0;
}