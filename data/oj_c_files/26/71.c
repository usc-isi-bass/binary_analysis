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
	char a[100];
	char c;
	int i=0;
	//i????
	while (cin.get(c))
	{
		if (c=='\n')
			break;
		else
		{a[i]=c;
		i=i+1;}
	}

	int j=0;
	int count=0;
	//count????????
	for (j=0;j<=i;j++)
	{
		if (j==i)
			break;
		if (a[j]!=' ')
		{
			cout<<a[j];
			count=0;
		}
		if (a[j]==' '&&count==0)
		{
			count=count+1;
			cout<<a[j];
		}
		if (a[j]==' '&&count==1)
		{
			count=1;
		}
		
	}

	return 0;
}

//while(c=getchar( ))