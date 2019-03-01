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
	char c[100]={"\0"};
	char a[100][10]={"\0"};
	int i=0,j=1,k=0;
	cin.getline(c,100,'\n');
	for (i=0;c[i]!='\0';i++)
	{
		if (c[i]!=' ')
		{
			k++;
			a[j][k]=c[i];			
		}
		else
		{
			j++;
			k=0;
		}
	}

	for (i=j;i>1;i--)
	{
		for (k=1;a[i][k]!='\0';k++)
		cout<<a[i][k];
		cout<<' ';
	}
	while (a[1][i]!='\0')
	{cout<<a[1][i];
	i++;}

	return 0;

}
