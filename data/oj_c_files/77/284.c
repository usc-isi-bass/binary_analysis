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

int a[100],num=0,v[100];
char c;
void f()
{
	char b;
	int m;
	cin>>b;
	if(num==0)
		c=b;
	if(b==c)
	{
		a[num]=0;
		num++;
		f();
	}
	if(b!=c)
	{
		a[num]=1;
		for(m=num;;m--)
		{
			if(a[m]==0&&v[m]==0)
			{
				v[m]=1;
				cout<<m<<" "<<num<<endl;
				break;
			}
		}
		if(m!=0)
		{
			num++;
			f();
		}

	}

}

int main()
{
	int i;
	for(i=0;i<=99;i++)
		v[i]=0;
	f();
	return 0;
}