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

void e(int,int);
char a[100];
int main()
{
	int i=0;
	cin.getline(a,100);
	while(a[i]!='\0')
	{
		i++;
	}
	e(0,i-1);
	return 0;
}
void e(int b,int c)
{
	int t=0,j=0;
	if(b==c-1)
		cout<<b<<" "<<c<<'\n';
	else
	{
		j=b;
		while(1)
		{
			if(a[j]==a[0])
				t++;
			if(a[j]==a[c])
				t--;
			if(t==0)
				break;
			j++;
		}
		if(j==c)
		{
			e(b+1,c-1);
			cout<<b<<" "<<c<<'\n';
		}
		else
		{
			e(b,j);
			e(j+1,c);
		}
	}
}
	
