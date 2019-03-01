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
	char a[100][100]={0};
	int i=0,k=0,x=0,y=0;
	for(i=0;;i++)
	{
		for(k=0;a;k++)
		{
			a[i][k]=getchar();
			if(a[i][k]==' '||a[i][k]=='\n')
				break;
		}
		if(a[i][k]=='\n')
			break;
	}

	for(x=0;x<=i;x++)
	{
		for(y=0;x>=0;y++)
		{
			if(a[i-x][y]!=32&&a[i-x][y]!='\n')
			cout<<a[i-x][y];
			else 
				break;
		}
		if(x<i)
		cout<<" ";
	}
	return 0;
}
