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
	int n;
	scanf("%d",&n);
	int len[100];
	char word[100][20];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%s",word[i]);
		len[i]=strlen(word[i]);
		
	}
	int j;


	for(j=0;j<n;j++)
	{
		if(word[j][len[j]-2] == 'e' && word[j][len[j]-1] == 'r')
		{
			for(i=0;i<(len[j]-2);i++)
			{
				printf("%c",word[j][i]);
			}
			printf("\n");
		}
		else
		{
			if(word[j][len[j]-2] == 'l' && word[j][len[j]-1] == 'y')
			{
				for(i=0;i<(len[j]-2);i++)
				{
					printf("%c",word[j][i]);
				}
				printf("\n");
			}
			else
			{
				if(word[j][len[j]-3] == 'i' && word[j][len[j]-2] == 'n' && word[j][len[j]-1] == 'g')
				{
					for(i=0;i<(len[j]-3);i++)
					{
						printf("%c",word[j][i]);
					}
					printf("\n");
				}
				else
				{
				}
			}
		}
	}

	return 0;
}