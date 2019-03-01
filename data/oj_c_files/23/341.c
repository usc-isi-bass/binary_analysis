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
	int len,i,j,a,b;
	char str[100];
	cin.getline(str,100);
	for(len=0;str[len]!='\0';len++);
	a=len+1;
	for(i=len-1;i>=0;i--)
	{
		if(str[i]==' ')
		{
			b=a-1;
			a=i+1;
			for(j=a;j<b;j++)
				cout<<str[j];
			cout<<' ';
		}
	}
	for(j=0;j<a-1;j++)
		cout<<str[j];
}