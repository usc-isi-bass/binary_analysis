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
	char ch[200],temp[200];
	int n,i,figure,tempnum[200];
	scanf("%d\n",&n);
	while(gets(ch))
	{
		figure=0;
		for(i=0;ch[i]!='\0';i++)
		{
			temp[i]=' ';
			switch(ch[i])
			{
			case '(':tempnum[figure++]=i;temp[i]='$';break;
			case ')':
				if(figure>0)
				{
					figure--;temp[tempnum[figure]]=' ';
				}
				else temp[i]='?';break;
			}
		}
		temp[i]='\0';
		printf("%s\n%s\n",ch,temp);
	}
}