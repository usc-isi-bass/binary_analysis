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
	char str[100];
	char array[100][100];
    int i,j=0,k;
	gets(str);
    for(i=0;str[i]!='\0';i++)
	{
		for(k=0;str[j]!=' '&&str[j]!='\0';j++)
		{
			array[i][k]=str[j];
			k++;
		}
		if(i==0)
		    array[i][k]='\0';
		else
		{
			array[i][k]=' ';
			array[i][k+1]='\0';
		}
		if(str[j]=='\0')
			break;
		j++;
	}
	for(;i>=0;i--)
	{
		for(k=0;;k++)
		{
			if(array[i][k]=='\0')
				break;
			else
			{
				putchar(array[i][k]);
			}
		}
   	}
}
