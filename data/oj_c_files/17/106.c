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
	int i,j,len;
	char a[101];
	
    while(cin>>a)
	{
		int b[100]={0};
		len=strlen(a);

	for(i=0;i<len;i++)
	{
		if(a[i]==')')
		{
			char *p=&a[i-1];
			for(j=i-1;j>=0;j--)
			{
				if(*p=='('&&b[j]==0)
				{
					b[j]=1;b[i]=1;
					break;
				}
				p--;
				
			}
		}
	}
    cout<<a<<endl;
	for(i=0;i<len;i++)
	{
		if(a[i]=='('&&b[i]==0)
			cout<<"$";
		else
		{
			if(a[i]==')'&&b[i]==0)
				cout<<"?";
			else
				cout<<" ";
		}
	}
	cout<<endl;
	}
	return 0;
}
