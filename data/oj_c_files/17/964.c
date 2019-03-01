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

char a[101],b[101];
int l,c[101];
int main()
{
	int i,j;
	while(cin.getline(a,101))
	{
		j=0;
		memset(c,0,sizeof(c));
		l=strlen(a);
		for(i=0;i<l;i++)
		{
			if(a[i]=='(')
			{
				b[i]='$';c[j]=i;
				j=j+1;
			}
			else if(a[i]==')')
			{
				if(j>=1)
				{
					b[c[j-1]]=' ';b[i]=' ';
					j=j-1;
				}
				else
				{
					b[i]='?';
				}
			}
			else
			{
				b[i]=' ';
			}
		}
		b[l]='\0';
		cout<<a<<endl;
		cout<<b<<endl;
	}
	return 0;
}
