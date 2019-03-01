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
	char s[40];
	gets(s);
	char *p=s;
	int sum=0,sign,i,j,k;
	for(i=0;i<strlen(s);)
	{
		sign=0;
		if(p[i]=='0'&&i+1<strlen(s)&&(p[i+1]>='0'&&p[i+1]<='9')&&!sign)
		{
			i++;
			continue;
		}
		if(p[i]>='0'&&p[i]<='9')
		while(p[i]>='0'&&p[i]<='9'&&i<strlen(s))
		{
			cout<<p[i];
			i++;
		}
		else
		{
			i++;
			continue;
		}
		cout<<endl;
	}
	//while(1);
	return 0;
}
		
		
