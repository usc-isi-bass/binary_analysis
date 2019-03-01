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

char str[110];
void search()
{
	int i=0,l,t=0;
	char str1[110];
	int stack[110];//?
	cout<<str<<endl;
	l=strlen(str);memset(str1,' ',sizeof(str1));
	while (i<l)
	{
		if (str[i]=='(')//???????
		{
			t++;
			stack[t]=i;
		}
		if (str[i]==')')//??????????????????
		{
			if (t==0) str1[i]='?'; else t--;//??
		}
		i++;
	}
	for (i=1;i<=t;i++) str1[stack[i]]='$';//???????
	for (i=0;i<l;i++) cout<<str1[i];//??
	cout<<endl;
}
int main()
{
	while (cin>>str) search();//????????
	return 0;
}

