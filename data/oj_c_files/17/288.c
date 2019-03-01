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
	char str[110],tra[110],mark[110];
	int n,i,j,p,q;
	while(gets(str))
	{
		p=q=-1;
		n=strlen(str);
		mark[n]=NULL;
		for(i=0;i<n;i++)
		{
			if(str[i]=='(')
			    p=i;
		}
		strcpy(tra,str);
		for(i=p;i>=0;i--)
			if(tra[i]=='(')
				for(j=i+1;j<n;j++)
					if(tra[j]==')')
					{
						tra[i]=tra[j]='a';
						break;
					}
		for(i=0;i<n;i++)
			if(tra[i]=='(')
				mark[i]='$';
			else if(tra[i]==')')
				mark[i]='?';
			else mark[i]=' ';
		printf("%s\n%s\n",str,mark);
	}
	return 0;
}
