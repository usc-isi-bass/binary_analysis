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

char a[1002];
int l,cc=0;
void tongji(int p)
{
	int i,q;
	if (p==l) {}
	else
	{
		cc=1;
		for (i=p;i<=l;i++)
		{
			if (a[i]==a[i+1])
			{
				cc++;
			}
			else 
			{
				q=i;
				break;
			}
		}
		cout<<"("<<a[p]<<","<<cc<<")";
		tongji(q+1);
	}
}
int main()
{
	int i;
	cin>>a;
	l=strlen(a);
	for (i=0;i<l;i++)
	{
		if (a[i]>='a') a[i]-=32;
	}
	a[strlen(a)]='!';
	tongji(0);
	return 0;
}
