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
	char str[1001];
	int len,count=0;
	int i;
	char c;
	cin>>str;
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		if(str[i]>='a'&&str[i]<='z')
			str[i]-=32;
	}
	c=str[0];
	for(i=0;i<len;i++)
	{
		if(str[i]==c)
		{
			count++;
		}
		else
		{
			cout<<"("<<str[i-1]<<","<<count<<")";
			c=str[i];
			count=1;
		}
	}
	i--;
	cout<<"("<<str[i]<<","<<count<<")";
	cout<<endl;
	
	return 0;
}