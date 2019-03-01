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
	int i,num,j=0,k=0;
	char a,s[350];
	gets(s);
	for(a='A';a<='Z';a++)
	{    num=0;
		for(i=0;s[i]!='\0';i++)
		{
			if(s[i]==a)
				num++;
		}
		if(num!=0)
		{
			printf("%c=%d\n",a,num);
		   j++;
		}
	}

   for(a='a';a<='z';a++)
	{    num=0;
		for(i=0;s[i]!='\0';i++)
		{
			if(s[i]==a)
				num++;
		}
		if(num!=0)
		{
			printf("%c=%d\n",a,num);
		   k++;
		}
	}
   if(j==0&&k==0)
	   printf("No");
   return 0;
}