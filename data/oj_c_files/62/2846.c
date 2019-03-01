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
	char str[1000],c1,c2;
	int i,j,num=0;
	gets(str);
	for(i=0;(str[i])!='\0';i++)
	{
		c1=str[i];
		if(c1==' ') 
		{
			for(j=i+1;(c2=str[j])==' ';j++)
			{
				num+=1;
			}
			for(j=i+1;str[j]!='\0';j++)
			{
				str[j]=str[j+num];
			}
			num=0;
		}
	}
	printf("%s",str);
}