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
	char a[1010]={'\0'};
	char c=getchar();
	int num=0;
	while(c!='\n')
	{
		if(c>=97 && c<=122)
		{
			a[num]=c-32;
			num++;
		}
		else
		{
			a[num]=c;
			num++;
		}
		c=getchar();
	}
	int i=0;
	num=1;
	a[strlen(a)]='1';
	for(i=0;i<strlen(a)-1;i++)
	{
		if(a[i]==a[i+1])
			num++;
		else if(a[i]!=a[i+1])
		{
			cout<<"("<<a[i]<<","<<num<<")";
			num=1;
		}
	}
	return 0;
}