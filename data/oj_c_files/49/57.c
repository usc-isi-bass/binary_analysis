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

/*         ????
??????        2010.11.24      */

void f(int sta,int len,char a[])
{
	int g=0,i;
	for(i=0;i<len-1-i;i++)
		if(a[i+sta]!=a[sta+len-1-i])
		{
			g=1;
			break;
		}
	if(g==0)
	{
		for(i=sta;i<sta+len;i++)
			cout<<a[i];
		cout<<endl;
	}
}

int main()
{
	int len,sta;
	char a[503]={'\0'};
	cin.getline(a,sizeof(a));
	for(len=2;len<=strlen(a);len++)
		for(sta=0;sta+len<=strlen(a);sta++)
			f(sta,len,a);
	return 0;
}