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

int main ()
{
	int i=0,j=0,num=0;
	char a[1000]={0},b[1000]={0};
	cin>>a>>b;
	if(strlen(a)==strlen(b))
	{
	while(a[i]!=0)
	{
		j=0;
		while(b[j]!=0)
		{
			if(b[j]==a[i])
			{
				b[j]=' ';
				a[i]=' ';
				break;
			}
			j++;
		}
		i++;
	}
	i=0;
	while(a[i]!=0)
	{
		if(a[i]!=' '||b[i]!=' ')
			num++;
		i++;
	}
	if(num>0)
		cout<<"NO";
	else
		cout<<"YES";
	}
	else
		cout<<"NO";
	return 0;
}