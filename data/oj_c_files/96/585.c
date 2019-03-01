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

char temp[100]={"\0"};
int main()
{
	int len;
	int i;
	int a[105]={0};
	int num;
	char c[105]={"\0"};
	cin>>c;
	len=strlen(c);
	for (i=0;i<105;i++)
		a[i]=c[i]-'0';
	if (len<2)
	{
		cout<<'0'<<endl<<a[0]<<endl;
		return 0;
	}
	else 
	{
		num=a[0]*10+a[1];
		if (num>13)
			cout<<num/13;
		else if (len==2)
			cout<<'0'<<endl;
		a[1]=num%13;
		for (i=1;i<len-1;++i)
		{
			num=a[i]*10+a[i+1];
			a[i+1]=num%13;
			cout<<num/13;
		}
		cout<<endl;
		cout<<a[i]<<endl;
	}
return 0;	
}