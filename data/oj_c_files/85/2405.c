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
	int n;
	cin>>n;
	for(int i=0;i<n;++i)
	{
		char a[30];
		cin>>a;
		if((a[0]>='a'&&a[0]<='z')||(a[0]>='A'&&a[0]<='Z')||a[0]=='_')
		{
			int z=0;
			for(int i=1;a[i]!=0;++i)
			{
				if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')||a[i]=='_'||(a[i]>='0'&&a[i]<='9'))
				{
				}
				else
				{
				z=1;cout<<"no"<<endl;break;
				}

			}
			if(!z)cout<<"yes"<<endl;
		}
		else
		cout<<"no"<<endl;
	}
	return 0;
}

