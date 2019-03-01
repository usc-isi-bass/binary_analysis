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
	char a[80],b[80];
	int c,t1,t2;
	gets(a);              //:?????
	gets(b);
	t1=strlen(a);           //:????
	t2=strlen(b);
	for (int i=0;i<t1;i++)
	{
        c=a[i];
		if (c>=65 && c<=90)        //:???????????????????????
		{c=c+32;
		a[i]=c;}
	}
	for (int j=0;j<t2;j++)
	{
        c=b[j];
		if (c>=65 && c<=90)
		{c=c+32;
		b[j]=c;}
	}
	if (strcmp(a,b)>0)
		cout<<">"<<endl;
	else if (strcmp(a,b)==0)
		cout<<"="<<endl;
	else if (strcmp(a,b)<0)
		cout<<"<"<<endl;
	return 0;
}

