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
	char word1[50]={'0'},word2[50]={'0'};
	char a[50]={'0'};
	int x=0,num,i,j,len1,len2;
	scanf("%s %s",word1,word2);
	len1=strlen(word1);
	len2=strlen(word2);
	for(i=0;i<len2-len1+1;i++)
	{
		x=0;
		if(word1[0]==word2[i])
		{
			num=i;
			for(j=num;j<len1+num;j++)
			{
				a[x]=word2[j];
				x++;
			}
			a[j]='\0';
			if(strcmp(word1,a)==0)
		{
			printf("%d\n",num);
			break;
		}
		}
	}
	return 0;
}