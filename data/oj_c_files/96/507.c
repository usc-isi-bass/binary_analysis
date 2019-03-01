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
	int b[101],c=0,i,t=0,len,result[101];
	cin>>a;
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		b[i]=a[i]-'0';//?????
	}
	for(i=0;i<len;i++)
	{
		c=c*10+b[i];
		if(c>=13)
		{	result[t]=c/13;//???
		    t++;
		    c=c%13;
		}
		else
		{
			result[t]=0;
			t++;
		}
	}
	i=0;
	while(result[i]==0)
	{i++;}
	if(i>=len)//???????
		cout<<"0";
	else
	{
	for(;i<t;i++)
		cout<<result[i];//??
	}
	cout<<endl;
	cout<<c<<endl;
	return 0;
}


