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


int zichuan(char a[], char b[],int n)
{
	for(int i=0;i<strlen(b);i++)
	{
		if(a[n+i]!=b[i])
			return 0;
	}
	return 1;
}

int main(int argc, char* argv[])
{
	char s[60],w[60];
	cin>>s>>w;

	int i=0;
	for(i=0;;i++)
	{
		if(zichuan(w,s,i)==1)
			break;
	}
	cout<<i;

	return 0;
}
