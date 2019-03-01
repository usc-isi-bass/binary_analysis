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
	int bs[102],i,j;
	char a[102];
	memset(bs,0,102);
	while(cin.getline(a,102))
	{
		for(i=0;i<102;i++)
		{
			if(a[i]=='\0')
				break;
			if(a[i]=='(')
				bs[i]=1;
			if(a[i]==')')
			{
				bs[i]=1;
				for(j=i;j>=0;j--)
				{
					if(a[j]=='('&&bs[j]==1)
					{
						bs[j]=0;
						bs[i]=0;
						break;
					}
				}
			}
		}
		cout<<a<<endl;
		for(i=0;i<102;i++)
		{
			if(a[i]=='\0')
				break;
			if(a[i]==')'&&bs[i]==1)
				cout<<"?";
			else if(a[i]=='('&&bs[i]==1)
				cout<<"$";
			else
				cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}
