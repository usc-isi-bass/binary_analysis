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
	char a[100]={0};
	while(cin>>a)
	{
		cout<<a;
		cout<<endl;                                         //??????
		int len,i,j;
		len=strlen(a);
		for(i=len-1;i>=0;i--)                               //?????????
		{
			if(a[i]=='(')
			{
				for(j=i+1;j<len;j++)
				{
					if(a[j]==')')
					{
						a[i]='A';
						a[j]='B';
						break;
					}
				}
			}
		}
		for(i=0;i<len;i++)                                  //???????????????????
		{
			if(a[i]=='(')
				cout<<"$";
			else
			{
				if(a[i]==')')
					cout<<"?";
				else
					cout<<" ";
			}
		}
		cout<<endl;
		memset(a,0,sizeof(a));
	}
	return 0;
}