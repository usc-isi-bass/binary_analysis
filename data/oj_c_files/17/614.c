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
	char a[100];
	while(cin>>a)
	{
		cout<<a<<endl;
		int l=strlen(a);
		for(int i=0;i<l;i++)
		{
			if(a[i]==')')
			{
				for(int j=i-1;j>=0;j--)
					if(a[j]=='(')
					{
						a[i]=a[j]=' ';
						break;
					}
			}
			if(a[i]!='('&&a[i]!=')')
				a[i]=' ';
		}
		for(int i=0;i<l;i++)
		{
			if(a[i]=='(')cout<<'$';
			else if(a[i]==')')cout<<'?';
			else cout<<' ';
		}
		cout<<endl;
	}
	return 0;
}