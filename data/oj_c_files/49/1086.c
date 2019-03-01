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
	static char str[501];
	int len,i,j,p,l;
	gets(str);
	for(len=0;str[len]!='\0';len++);
	for(l=2;l<=len;l++)
	{
		for(i=0;i<=len-l;i++)
		{
			for(j=0;j<l/2;j++)
			{
				if(str[i+j]!=str[i+l-1-j])
				{
					goto here;
				}
			}
				for(p=i;p<i+l;p++)
					printf("%c",str[p]);
				printf("\n");
				here: continue;
		}
	}
	
	return 0;
}
