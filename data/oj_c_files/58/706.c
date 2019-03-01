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
	int n,i,temp=1;
	char s[200][85];
	scanf("%d",&n);
	gets(s[0]);
	for(;n>0;n--)
	{
		temp=1;
		gets(s[n]);
		if((s[n][0]==95)||((s[n][0]<123)&&(s[n][0]>96))||((s[n][0]<91)&&(s[n][0]>64))) ;
		else 
		{
			printf("0\n");
			continue;
		}
		for(i=1;s[n][i]!='\0';i++)
		{
			if((s[n][i]==95)||((s[n][i]<123)&&(s[n][i]>96))||((s[n][i]<91)&&(s[n][i]>64))||((s[n][i]<58)&&(s[n][i]>47))) ;
			else 
			{
				printf("0\n");
				temp=0;
				break;
			}
		}
		if(temp)
			printf("1\n");
	}
	return 0;
}