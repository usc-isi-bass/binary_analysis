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
	char s[110];
	while(cin>>s)
	{
	cout<<s<<endl;
	int l=strlen(s),i;
	for(i=l-1;i>=0;i--)
	{
	if(s[i]==')')
		continue;
	else if(s[i]=='(')
	{
		int j;
	for( j=i;j<l;j++)
		{if(s[j]==')')
		{
		s[i]=' ';s[j]=' ';
		break;
	}}
		if(j==l)
			s[i]='$';
	}
	else
		s[i]=' ';
	}
	for(i=0;i<l;i++)
		if(s[i]==')')
			s[i]='?';
	cout<<s<<endl;
	}
	return 0;
}