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
	char a[110];
	int i,j,k,l,m,n,x;
	while(cin.getline(a,110))//??
	{
	n=strlen(a);
	for(m=0;m<n;m++)
	{cout<<a[m];}
	cout<<endl;//??????
	for(i=0;i<n;i++)
	{
		if(a[i]==')')
		{
			for(j=i-1;j>=0;j--)
			{
				if(a[j]=='(')
				{
					a[i]=' ';a[j]=' ';break;//??????
				}
			}
		}
	}
	for(k=0;k<n;k++)
	{
		if(a[k]!='('&&a[k]!=')')
		{a[k]=' ';}
		if(a[k]=='(')
		{a[k]='$';}
		if(a[k]==')')
		{a[k]='?';}//???????
	}
	for(m=0;m<n;m++)
	{
		cout<<a[m];//??
	}
	cout<<endl;
	}
	return 0;
}