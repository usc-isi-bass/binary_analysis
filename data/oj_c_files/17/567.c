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

char s[100];
char a[100];
int b[100];
int num=0;
int i,j;
void f()
{
	for(i=0;i<strlen(s);i++)//?a[i]??????
	{
		a[i]=' ';
	}
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]=='(')//?s[i]=='('
		{
			 b[num]=i;//?b[num]?????
			 a[i]='$';//?a[i]??'$'
			 num++;//num?1

		}
		else if(s[i]==')'&&num>0)//?s[i]==')'&&num>0
		{
			num--;//num?1
			a[b[num]]=' ' ;//?a[b[num]]????

		}
		else if(s[i]==')'&&num<=0)//?s[i]==')'&&num<=0
			a[i]='?';//?a[i]???
	}
	for(i=0;i<strlen(s);i++)
	{
		cout<<a[i];//??a[i]
	}
	cout<<endl;
}
int main()
{
	while(cin>>s)
	{
		num=0;
		cout<<s<<endl;
		f();
	}
}
