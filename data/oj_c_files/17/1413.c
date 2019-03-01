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
	char a[101];
	int i,num=1,j;
	while(cin.getline(a,101))
	{
		cout<<a<<endl;
		for(i=0;a[i]!='\0';i++)
		{
			num=1;
			if(a[i]!=')'&&a[i]!='(')
				cout<<" ";
			if(a[i]=='(')
			{
				if(a[i+1]=='\0')
				{
					cout<<"$";
					continue;
				}
				for(j=i+1;a[j]!='\0';j++)
				{
					if(a[j]=='(')
						num++;
					if(a[j]==')')
						num--;
					if(num==0)
					{
						cout<<" ";
						break;
					}
					if(a[j+1]=='\0'&&num!=0)
						cout<<"$";
				}
			}
			num=1;
			if(a[i]==')')
			{
				if(i==0)
				{
					cout<<"?";
					continue;
				}
				for(j=i-1;j>=0;j--)
				{
					if(a[j]==')')
						num++;
					if(a[j]=='(')
						num--;
					if(num==0)
					{
						cout<<" ";
						break;
					}
					if(j==0&&num!=0)
						cout<<"?";
				}
			}
		}
		cout<<endl;
	}
	return 0;
}