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

char c[1001]={"\0"};
char temp[1001]={"\0"};
int deal();
int deal1();
int main()
{
	cin>>c;
	deal();
	deal1();
	return 0;
}
int deal()
{
	int i;
	for (i=0;c[i]!='\0';i++)
		if ((c[i]>='a')&&(c[i]<='z'))
			c[i]=c[i]-'a'+'A';
	return 0;
}
int deal1()
{
	int i;
	char word=c[0];
	int times[1001]={0};
	int l=0;
	temp[0]=word;
	for (i=0;c[i]!='\0';i++)
	{
		if (c[i]==word)
		{
			times[l]++;
		}
		else
		{
			l++;
			times[l]=1;
			temp[l]=c[i];
			word=temp[l];
		}
	}
	for (i=0;times[i]!=0;i++)
		cout<<'('<<temp[i]<<','<<times[i]<<')';
	cout<<endl;
	return 0;
}