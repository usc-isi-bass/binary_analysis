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

int main(void)
 {
	char string[256]={'\0'};
	char subString[100]={'\0'};
	char replacement[100]={'\0'};
	int i=0,j=0,k=0;
	char c='\0';
	while(c != '\n')
	{
		c=getchar();
		if(c != '\n')
		{
			string[i] = c;
			i++;
		}
	}
	scanf("%s",subString);
	scanf("%s",replacement);
	for(i=0;i<strlen(string);i++)
	{
		if(string[i] == subString[0])
		{
			k=i;
			for(j=0;j<strlen(subString);j++,k++)
			{
				if(subString[j] != string[k]){break;}
			}
			if(j==strlen(subString))
			{
				k=i;
				for(j=0;j<strlen(replacement);j++,k++)
				{
					string[k]=replacement[j];
				}
				break;
			}
		}
	}
	printf("%s\n",string);
    return 0;
 }
