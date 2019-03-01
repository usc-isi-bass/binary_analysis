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
	cin>>str;
	int i,counter;
	for (i=0;str[i]!='\0';i++)
	{
		if (str[i]>='a' && str[i]<='z')
		{
			str[i]=str[i]+'A'-'a';
		}
	}
	char temp;
	counter=1;
	temp=str[0];
	for (i=1;str[i-1]!='\0';i++)
	{
		if (temp==str[i])
			counter++;
		else
		{
			cout<<'('<<temp<<','<<counter<<')';
			counter=1;
			temp=str[i];
		}
	}
	return 0;
}