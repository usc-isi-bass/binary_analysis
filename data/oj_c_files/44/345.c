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

void arc()
{
	char str[10000];
	char str2[10000];
	int a,b=0,c;
	gets(str);
	a=strlen(str);
	if(a==1) putchar(str[0]);
	else
	{
		if(str[0]=='-') 
		{
			putchar(str[0]);
					}
		for(c=a-1;;c--)
		{
		    if(str[c]=='0') b++;
			else
			{
				printf("%c",str[c]);
				b++;
				break;
			}
		}
		for(;b<a;b++) 
		{
			
			if(str[a-b-1]!='-') printf("%c",str[a-b-1]);
	    }
	}
	printf("\n");
}
void main()
{
	int i=0;
	for(;i<6;i++) arc();
}
