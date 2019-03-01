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
	int word_num,i,sum;
	char word[500][45];
	scanf("%d\n",&word_num);
	sum=0;
	for(i=0;i<word_num;i++)
	{
		scanf("%s",&word[i]);
	}
	for(i=0;i<word_num;i++)
	{
		if(sum==0)
		{
			printf("%s",word[i]);
			sum+=strlen(word[i]);
		}
		else
		{
			sum+=strlen(word[i])+1;
			if(sum<=80)
			{
				printf(" %s",word[i]);
			}
			else
			{
				sum=0;
				i--;
				printf("\n");
			}
		}
	}
	return 0;
}

		

