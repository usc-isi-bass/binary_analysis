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
	char ch[500][50];
	int i,j,n,m,l[500]={0};
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>ch[i];
		l[i]=strlen(ch[i]);
	}
	m=0;
	for(i=1;i<=n;i++)
	{
		if(m>0)
		{
			if(m+1+l[i]<=80)
			{
				cout<<' '<<ch[i];
				m+=l[i]+1;
			}
			else
			{
				m=0;
				cout<<endl;
			}
		}
		if(m==0)
		{
			cout<<ch[i];
			m+=l[i];
		}
	}
	return 0;
}