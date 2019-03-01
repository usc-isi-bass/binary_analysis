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

int a[101]={0};
int n=0,i=0;
char first;
void f()
{
	char c;
	c=getchar();
	if (c!='\n')
	{
		if (i==0)
			first=c;
		if (c==first)
		{
			a[++n]=i++;  //???????????????????????
			f();
		}
		else 
		{
			cout<<a[n--]<<" "<<i++<<endl;   //????????????????????
			f();
		}
	}
}
int main()
{
	f();
	
	return 0;
}