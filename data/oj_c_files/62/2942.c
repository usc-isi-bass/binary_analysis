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

int main()
{
	char str[1000];
	int i,j,flag=1;
	cin.getline(str,1000);
	int len=strlen(str);
	for(i=0;i<len;i++)
	{
		if(flag==0&&str[i]!=' ')cout<<' ';
		if(str[i]==' ')flag=0;
		else {flag=1;cout<<str[i];}
	}
	return 0;
}