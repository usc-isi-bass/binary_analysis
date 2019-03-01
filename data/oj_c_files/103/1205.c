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
	char a[1001];
	scanf ("%s",a);
	int i;
	for (i=0;i<strlen(a);i++)
	{
		if (a[i]>='a'&&a[i]<='z')
			a[i]=a[i]-'a'+'A';
	}
	int t=1;
	for (i=0;i<strlen(a);i++)
	{
		if (a[i]==a[i+1])
		{
			t++;
		}
		else
		{
			printf ("(%c,%d)",a[i],t);
			t=1;
		}
	}

}