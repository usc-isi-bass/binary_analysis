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
	int t,i;
	scanf("%d\n", &t);
	for(i=0; i<t; i++)
	{
	char word[100000]={0},*p=word;
	int number[26]={0},*q=number;
	int flag=0, count, j;
		gets(word);
		count = strlen(word);
		for(j=0; j<count; j++)		
			*(q+*(p+j)-'a')=*(q+*(p+j)-'a')+1;
		for(j=0; j<count; j++)
			{
				if(*(q+(*(p+j)-97))==1)
				{
					printf("%c\n",*(p+j));
					flag=1;
					break;
				}
			}
		if(flag==0)
			printf("no\n");
	}
	return 0;
}