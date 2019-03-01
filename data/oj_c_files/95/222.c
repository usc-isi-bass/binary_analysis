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


int min(int x,int y)
{
	if(x>y) return y;
	else return x;
}

int main()
{
	char a[80],b[80];
	int x,y,i,z;
	gets(a);
	x=strlen(a);
	gets(b);
	y=strlen(b);
	z=min(x,y);
	for(i=0;i<x;i++)
	{
		if ((a[i]>='a')&&(a[i]<='z'))
			a[i]=a[i]-32;
		if ((b[i]>='a')&&(b[i]<='z'))
			b[i]=b[i]-32;
	}
	for(i=0;i<x;i++)
	{
		if ((a[i]>b[i])&&(a[i]-b[i]!=32))
		{
			printf(">");
			break;
		}
		else if((a[i]<b[i])&&(b[i]-a[i]!=32))
		{    
			printf("<");
			break;
		}
		if (i==x-1) printf("=");
	}
	return 0;
}

