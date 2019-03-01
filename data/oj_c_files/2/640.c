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

struct book
{
	int id;
	char writer[30];
}book[1200];
int main()
{
	int n,l,t,a[30];
	char m;
	cin>>n;
	for(int i=0;i<30;i++)  a[i]=0;
	for(int i=0;i<n;i++)
	{
		cin>>book[i].id>>book[i].writer;
		l=strlen(book[i].writer);
		for(int j=0;j<l;j++)
		{
			t=book[i].writer[j]-65;
			a[t]++;
		}
	}
	t=a[0];l=0;
	for(int i=0;i<26;i++)
	{
		if(a[i]>t)
		{
			l=i;
			t=a[i];
		}
	}
	m=l+65;
	cout<<m<<endl;
	cout<<t<<endl;
	for(int i=0;i<30;i++)  a[i]=0;
	for(int i=0;i<n;i++)
	{
		l=strlen(book[i].writer);
		for(int j=0;j<l;j++)
		{
			if(book[i].writer[j]==m)
				cout<<book[i].id<<endl;
		}
	}
	return 0;
}