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
	int i,j,k,l,count;
	char s[105],head;
	gets(s);
	l=strlen(s);
	count=0;
	for(;;)
	{
		for(i=0;i<l;i++)
		{
			if(s[i]==' ') i++;
			else 
			{
				head=s[i];
				break;
			}
		}
		for(j=i;j<l;j++)
		{
			if(s[j]!=' '&&s[j]!=head)
			{
				for(k=j-1;k>=0;k--)
				{
					if(s[k]!=' ') break;
				}
				printf("%d %d\n",k,j);
				s[k]=' ';s[j]=' ';
			}
		}
		count+=2;
		if(count==l) break;
	}
	return 0;
}