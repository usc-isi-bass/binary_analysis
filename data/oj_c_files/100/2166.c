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
	char s[300],j,i;
	int b=0;
	scanf("%s",s);
	for(i='A';i<='Z';i++)
	{
		int num1=0;
		for(j=0;j<strlen(s);j++)
		{
			if(i==s[j])
			{
				num1++;
			}
		}
		if(num1!=0)
		{
		   printf("%c=%d\n",i,num1);
		   b=1;
		}
	}
	for(i='a';i<='z';i++)
	{
		int num=0;
		for(j=0;j<strlen(s);j++)
		{
			if(i==s[j])
			{
				num++;
			}
		}
		if(num!=0)
		{
		   printf("%c=%d\n",i,num);
		   b=1;
		}
	}
	if(b==0){printf("No");}
	return 0;
}








