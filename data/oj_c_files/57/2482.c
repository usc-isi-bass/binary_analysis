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
	int n,z,i,l;
	char word[100];
	scanf("%d",&n);
	for(z=0;z<n;z++)
	{
		scanf("%s",word);
		l=strlen(word);
		
		for(i=0;i<l;i++)
		{
			if(word[l-3]=='i'&&word[l-2]=='n'&&word[l-1]=='g')
			{
				for(i=0;i<l-3;i++)
					printf("%c",word[i]);
				printf("\n");
				break;
			}
			else 
			{
				for(i=0;i<l-2;i++)
					printf("%c",word[i]);
				printf("\n");
				break;

			}
			printf("\n");
		}
	}
	return 0;
}
