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
	int n,i,j,l;char s[102];
	while(scanf("%s",s)!=EOF)
	{
		l=strlen(s);
		printf("%s\n",s);
		for(i=0;i<l;i++)
			if(s[i]=='(')s[i]='$';
			else if(s[i]==')')
			{
				s[i]='?';
				for(j=i-1;j>-1;j--)
					if(s[j]=='$'){s[j]=' ';s[i]=' ';break;}
			}
			else s[i]=' ';
			printf("%s\n",s);
	}
	return 0;
}
