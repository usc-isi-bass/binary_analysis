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

//????
int main()
{
	char s[100],a[100],b[100];
	int i,j,k,y;//y????????
	gets(s);
	gets(a);
	gets(b);
	for (i=0;i<strlen(s);)
	{
		y=0;
		for (j=i;j<i+strlen(a);j++)
		{
			if (s[j]==a[j-i])//???????
			{
				if (s[i-1]==32||i==0)
				{
					y=y+1;
				}
			}
			else
				break;
		}
		if (y==strlen(a))
		{
			i=i+strlen(a);
			for (k=0;k<strlen(b);k++)
				cout<<b[k];
		}
		else 
		{
			cout<<s[i];
			i++;
		}
	}
	return 0;
}
