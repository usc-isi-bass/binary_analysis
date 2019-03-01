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
	int i;
	char s[101]={'\0'},tem;
	char *p=NULL;
	p=s;
	cin.getline(s,101);
	for(i=1;*(p+i)!='\0';i++)
	{
	    tem=*(p+i)+*(p+i-1);
        cout<<tem;
	}
	cout<<(char)(*(p+i-1)+*p);
	return 0;
}