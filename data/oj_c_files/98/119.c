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
	int n,i,temp;
	char word[300][50]={0};

	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s",word[i]);

	i=0;
	temp=strlen(word[0])+1;
	while(i<n)
	{
		
			
			if(temp+strlen(word[i+1])<=80)
			{
				if(i==n-1)
                     printf("%s",word[i]);
				else
					printf("%s ",word[i]);
				i=i+1;
				temp=temp+strlen(word[i])+1;
			}
			else 
			{
            printf("%s\n",word[i]);
			i=i+1;
			temp=strlen(word[i])+1;
			}

	}
}