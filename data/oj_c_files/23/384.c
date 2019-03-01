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
	char a[50][50],ch; //?????????????
	int i=0,j=0,k;
	while ((ch=cin.get())!='\n')
	{
		if (ch==' ')
		{
			a[i][j]='1';
			i++;
			j=0;
		}           //??????????????????????????
		else 
		{
			a[i][j]=ch;
			j++;
		}           //???????????
	}
	a[i][j]='1';
    for (k=i;k>=1;k--)
	{
		j=0;
		while (a[k][j]!='1')
		{
			cout <<a[k][j];
			j++;
		}
		cout <<' ';
	}               //????????????????
	j=0;
	while (a[0][j]!='1')
	{
		cout <<a[0][j];
		j++;
	}             //????????
	return 0;
}