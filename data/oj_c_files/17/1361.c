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

//#include<math.h>


int main()
{
	char st[101];
	int g[101];
	int len,i,j,left;
	while (scanf("%s",st)!=EOF)
	{
		printf("%s\n",st);
		len=strlen(st);
		left=0;
		for (i=0;i<len;i++)
		{
			if (st[i]=='(')
			{
				left++;
				g[left]=i;
			}
		}
		for (i=left;i>0;i--)
		{
			for (j=g[i]+1;j<len;j++)
				if (st[j]==')')
				{
					st[g[i]]=' ';
					st[j]=' ';
					break;
				}
		}
		for (i=0;i<len;i++)
		{
			if (st[i]==')') printf("?");
			else if (st[i]=='(') printf("$");
			     else printf(" ");
		}
		printf("\n");
	}
	return 0;
}

