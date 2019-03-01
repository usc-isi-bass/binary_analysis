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

void change(char b[],int n,int m)
{
	if(b[m]!=')'&&m<n)//????
	{
		change(b,n,m+1);
	}
	if(b[m]==')'&&m<n)
	{
		int i;
		for(i=m;i>=0;i--)
		{
			if(b[i]=='(')
			{
				b[i]='A';
				b[m]='A';
				break;
			}
		}
		change(b,n,m+1);
	}
}
int main()
{
	char a[200];
	cin>>a;
	getchar();
	while(a[0]!=0)
	{
    int num,j;
	num=strlen(a);
	cout<<a<<endl;
	change(a,num,0);
	for(j=0;j<num;j++)//?????
	{
		if(a[j]=='(')a[j]='$';
		else
			{if(a[j]==')')
			a[j]='?';
            else
			a[j]=' ';
		}
	}
	cout<<a<<endl;
	cin.getline(a,200);
   }
	return 0;
}