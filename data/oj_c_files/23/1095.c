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

void main()
{
	char str[128];
	int n,i;
	char *string,*p,*temp;
	gets(str);
	n=strlen(str);
	string=str;
	string=string+n-1;
	p=str+n;
	for(i=n;i>0;i--,string--)
	{
		if((*string)==' ')
		{
			temp=string;
		{
			for(string=string+1;string!=p;string++)
		printf("%c",*string);
		}
		printf(" ");
		p=temp;
		string=temp;}
	}
	for(string=str;string!=p;string++)
		printf("%c",*string);





}