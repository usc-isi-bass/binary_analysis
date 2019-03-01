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
	int i,j,m,t,len;
	char a[100];
	while(cin>>a)
	{
		t=0;
		m=0;
		cout<<a<<endl;
		len=strlen(a);
		for(i=0;i<len;i++)
			if(a[i]==')')
				for(j=i-1;j>=0;j--)
					if(a[j]=='(')
					{
						a[i]='a';
						a[j]='a';
						break;
					}
		for(i=0;i<len;i++)
			if((a[i]=='(')||(a[i]==')'))
			{
				m=i;
				break;
			}
		for(i=len-1;i>=0;i--)
			if((a[i]=='(')||(a[i]==')'))
			{
				t=i;
				break;
			}
		for(i=m;i<=t;i++)
		{
			if(a[i]==')')
				cout<<"?";
			else if(a[i]=='(')
				cout<<"$";
			else
				cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}