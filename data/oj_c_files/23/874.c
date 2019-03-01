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
	char str[100][100];
	char str1[100];
	int i=0;
    gets(str1);
	int b=0;
	int p=strlen(str1);
    for(;i<p;i++)
	{	if(str1[i]==' ') b=b+1;}
    b=b+1;
    int j=0,k=0;
    for(i=0;i<p;i++)
	{
		
	    if(str1[i]!=' ')
		{str[j][k]=str1[i];k++;  }
        if(str1[i]==' ')  {str[j][k]='\0';j=j+1;k=0;}

	}
	str[j][k]='\0';
	
	for(;j>=1;j--)
	{
		for(k=0;;k++)
		{
			if(str[j][k]!='\0') printf("%c",str[j][k]);
			if(str[j][k]=='\0') break;
		}
		printf(" ");
	}
	for(;j>=0;j--)
	{	for(k=0;;k++)
		{
			if(str[j][k]!='\0') printf("%c",str[j][k]);
			if(str[j][k]=='\0') break;
		}
	}
}