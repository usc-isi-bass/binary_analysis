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

void main()
{
	char str[100][81];
	int n,i,j;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
		gets(str[i]);
	for(i=0;i<n;i++)
	{
		if(**(str+i)>=65&&**(str+i)<=90||**(str+i)>=97&&**(str+i)<=122||**(str+i)==95)
		{
			for(j=1;str[i][j]!='\0';j++)
			{
				if(*(*(str+i)+j)>=65&&*(*(str+i)+j)<=90||*(*(str+i)+j)>=97&&*(*(str+i)+j)<=122||*(*(str+i)+j)>=48&&*(*(str+i)+j)<=57||*(*(str+i)+j)==95);
				else break;
			}
			if(str[i][j]!='\0')printf("0");
		    else printf("1");
		}
		else printf("0");
		printf("\n");
	}
}
