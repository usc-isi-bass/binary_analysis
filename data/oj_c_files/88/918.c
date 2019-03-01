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
	char a[1000];
	char *p[1000];
	int i;
	cin.getline(a,1000);
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]>='0'&&a[i]<='9')
		{
			p[i]=&a[i];
		}
		else
		{
			p[i]=NULL;
		}
	}
	for(i=0;i<strlen(a);i++)
	{
		if(p[i]!=NULL)
		{
			cout<<*p[i];
		}
		else if(p[i+1]!=NULL)
		{
			cout<<endl;
		}
	}
	return 0;
}

