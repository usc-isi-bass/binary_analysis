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
	int n,i,j,k,a[1000],p,q;
	char str[1000][90];
	cin>>n;
	cin.get();
	for (i=1;i<=n;i++)
	{
		cin.getline(str[i],88);
	}
	for (j=1;j<=n;j++)
	{
		a[j]=strlen(str[j]);
	}
	for (k=1;k<=n;k++)
	{
		if (str[k][0]=='_'||(str[k][0]>='A'&&str[k][0]<='Z')||(str[k][0]>='a'&&str[k][0]<='z'))
		{
			for (p=0;p<=a[k]-1;p++)
			{
				if (str[k][p]!='_'&&(str[k][p]<'A'||(str[k][p]>'Z'&&str[k][p]<'a')||str[k][p]>'z')&&(str[k][p]<'0'||str[k][p]>'9'))
					break;
			}
			if (p==a[k])
				cout<<"1"<<endl;
			else 
				cout<<"0"<<endl;
		
		}
		else 
			cout<<"0"<<endl;

	}
	return 0;
}