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

/*
*???.cpp
*??
*2011?11?16?
*?????xi?
*/
int max(int a,int b)
{	
	if(a>b)
		return a;
	else
		return b;
}
int min(int c,int d)
{
	if(c<d)
		return c;
	else
		return d;
}
int main()
{
	int inter,x,y,t1,t2;
	cin>>x>>y;
	t1=x;
	t2=y;
	if(t1==t2)
		cout<<t1<<endl;
	else
		{
			while(1)
			{
				inter=t1;
				t1=max(t1,t2);
				t2=min(inter,t2);
				t1=t1/2;
				if(t1==t2)
					{cout<<t1<<endl;break;}
			}
		}
	return 0;
}