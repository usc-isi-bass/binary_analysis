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
	int len;
	char a[300],b[300],c[300];
	char *p,*q;
	cin>>a;
	cin>>b;
	cin>>c;
	len=strlen(b);
	p=strstr(a,b);
	q=a;
	if(p==NULL)
	{
		cout<<a;
	}
	else
	{
		while(q<p)
		{
		cout<<*q;
		q++;
		}
		q=p+len;
		cout<<c;
		while(*q!='\0')
		{
		cout<<*q;
			q++;
		}
	}


	return 0;
}





		

