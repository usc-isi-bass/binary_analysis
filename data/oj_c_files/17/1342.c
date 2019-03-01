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
	char str[N+1],flag[N+1];
	int i,j,sstack[N+1];
	while(scanf("%s",str)!=EOF)
	{
		printf("%s\n",str);
		j=0;
		for(i=0;i<strlen(str);i++)
		{
			if(str[i]=='(')
				sstack[j++]=i;
			else if(str[i]==')')
			{
				if(j<=0)
					flag[i]='?';
				else 
				{
					j--;
					flag[sstack[j]]=' ';
					flag[i]=' ';					
				}
			}
			else
				flag[i]=' ';
		}
		for(i=0;i<j;i++)
			flag[sstack[i]]='$';
		flag[strlen(str)]='\0';
		printf("%s\n",flag);
	}
	
	return 0;
}