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
	char a[100]={'\0'},b[100]={'\0'};
	int len,i,j,judge[100]={0};//??????????????????1??????0?????
	while(cin>>a)
	{
		len=strlen(a);
		for(i=0;i<len;i++)//???????
			b[i]=' ';
		for(i=99;i>=len;i--)
			b[i]='\0';
		for(i=0;i<len;i++)
		{
			if(a[i]==')')
			{ for(j=i;j>=0;j--)
			{
				if(judge[j]==0&&a[j]=='(')
				{judge[j]=1;judge[i]=1;break;}//???
			}
			if(judge[i]==0)
				b[i]='?';//????????????????????
			}
		}
		for(i=0;i<len;i++)
		{
			if(judge[i]==0&&a[i]=='(')
				b[i]='$'; //?????????????????$

		}
			for(i=0;i<len;i++)  cout<<a[i]; cout<<'\n';
	for(i=0;i<len;i++)  cout<<b[i]; cout<<'\n';
		for(i=0;i<100;i++)
		{judge[i]=0; }
	}
	return 0;
}
