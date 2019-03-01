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
	char string[100];
	int i,j,num=0,word=0;
	int a[100];//???????????????string????
	gets(string);
	for(i=0,j=0;string[i]!='\0';i++)
	{
		if(string[i]==' ')
		{
			word=0;
		    a[j]=i;
			j++;
		}
		else if(word==0)
		{
			word=1;
			num++;
		}
	}
	if(num>1)
	{
		for(i=a[j-1]+1;string[i]!='\0';i++)
		printf("%c",string[i]);
	    while(j>=2)
		{
		   for(i=a[j-2];i<a[j-1];i++)
		   printf("%c",string[i]);
		   j--;
		}
		printf(" ");
	    for(i=0;i<a[0];i++)
		printf("%c",string[i]);
	}
	else
		puts(string);
}