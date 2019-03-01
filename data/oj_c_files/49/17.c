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
	int i,j,p,q,k,len;
	char s[500];
	scanf("%s",s);
	len=strlen(s);
	for(i=2;i<=len;i++)/*????*/
		for(j=0;j<=len-i;j++)/*????*/
		{
			p=j;
			q=j+i-1;
			while(p<q)
			{
				if(s[p]==s[q])
				{
					p++;
					q--;
				}
				else break;
				if(p==q+1 || p==q)
				{
					for(k=j;k<=j+i-2;k++)
						printf("%c",s[k]);
					printf("%c\n",s[j+i-1]);
					break;
				}
			}
		}
}