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

char str[100];
char x,y;
void line(char a[])
{
	int i,j;
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]==y)
		{
			j=i;
			while (a[j]!=x)
			{
				j--;
			}	
			a[i]='0';
			a[j]='0';
			cout << j << " " << i << endl;
			break;
		}
	}
	if(i<strlen(a))
	{
		line(a);
	}
}
int main()
{
	cin >> str;
	x=str[0];
	y=str[strlen(str)-1];
	line(str);
	return 0;
}