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
	int n,t;
	char a[100][21];
	cin>>n;
	cin.get();
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		int tag=0;
		if(!((a[i][0]>='a'&&a[i][0]<='z')||(a[i][0]>='A'&&a[i][0]<='Z')||a[i][0]=='_'))
		{
			cout<<"no"<<endl;
			continue;
		}
		else
		{
			t=strlen(a[i]);
			for(int j=1;j<t;j++)
			{
				if((a[i][j]>='a'&&a[i][j]<='z')||(a[i][j]>='A'&&a[i][j]<='Z')||(a[i][j]>='0'&&a[i][j]<='9')||a[i][j]=='_')
					continue;
				else {
					tag=1;
					cout<<"no"<<endl;
					break;
			}
			}
			if(tag==0)
			 cout<<"yes"<<endl;
	}
	}
	return 0;
}