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


int reverse (int x)
{
	int back=0;
	int i;
	int qiang1,qiang2;// change the type of double->int
	int w; // digit number
	int m=1; // control + or -
	if(x<0)
	{
		m=-1;
		x=-x;
	}
	for(w=0;1;w++)
	{
		if(x/(pow(10,w))<10)
		{
			break;
		}
	}
	for(i=0;i<=w;i++)
	{
		qiang2=(int)pow(10,w-i);
		back+=(x%10)*qiang2;
		x=x/10;
	}
	return back*m;
}

int main()
{
	int a,i;
	for(i=0;i<6;i++)
	{
		scanf("%d",&a);
		printf("%d\n",reverse(a));
	}
	return 0;
}
