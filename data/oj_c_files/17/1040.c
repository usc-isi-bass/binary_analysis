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
	int n,i;
	scanf("%d\n",&n);
	while(n>0)
	{
		char s[104],start=0;
		int len=0;
			gets(s);
			puts(s);
		len=strlen(s);
            int j;
			for(i=len-1;i>=0;i--)
			{
				if(s[i]=='(')
				{
                   
					for(j=i;j<len;j++)
					{
if(s[j]==')')
{s[i]=' ';s[j]=' ';break;}
					}
				}
			}
	   for(i=0;i<len;i++)
	   {
		  if(s[i]=='(')
			  printf("$");
		 else if(s[i]==')')
			  printf("?");
		  else printf(" ");
	   }
	   printf("\n");
		n--;
	}
}
