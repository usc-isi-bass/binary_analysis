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
	char s[1][100];
	int i;
	for(i=0;i<2;i++)
	{
		gets(s[i]);
	}
	for(i=0;;i++)
	{
		if(s[0][i]>='a'&&s[0][i]<='z')
		{
			s[0][i]=s[0][i]-32;
		}
		if(s[1][i]>='a'&&s[1][i]<='z')
		{
			s[1][i]=s[1][i]-32;
		}
		if(s[0][i]>s[1][i])
		{
			cout<<">"<<endl;
			break;
		}
		if(s[0][i]<s[1][i])
		{
			cout<<"<"<<endl;
			break;
		}
		if(s[0][i]=='\0'||s[1][i]=='\0')
		{
			cout<<"="<<endl;
			break;
		}
	}
	return 0;
}