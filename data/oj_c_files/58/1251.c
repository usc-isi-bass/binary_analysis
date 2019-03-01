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

int f( char c);
int main()
{
	int n,i,j,out;
    char s[100],r;
	scanf("%d%c",&n,&r);
	while(n--)
	{
        gets(s);
		if( !f(s[0]) ) out=0;
		else
		{
			for(i=1;s[i]!='\0';i++)
			{
				if(  !( f(s[i]) || (s[i]>='0'&&s[i]<='9') ) )
				{
					out=0;break;
				}
			}
			if(s[i]=='\0') out=1;
		}
		printf("%d\n",out);
	}
	return 0;
}
int f(char c)
{
	if( (c=='_') || (c>='A'&&c<='Z') || (c>='a'&&c<='z') ) return 1;
	else return 0;
}
