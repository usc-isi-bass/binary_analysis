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
	char str[1000];
	cin>>str;
	for(int i=0;i<strlen(str);i++)
	{
		if((str[i]>='a')&&(str[i]<='z'))
			str[i]-=32;
	}
	for(int i=0;i<strlen(str);i++)
	{
		cout<<'('<<str[i]<<',';
		int j=1;
		while(str[i+j]==str[i])
		{
			j++;
		}
		cout<<j<<')';
		i+=(j-1);
	}
	cout<<endl;
	return 0;
}