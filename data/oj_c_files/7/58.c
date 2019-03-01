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
	char word[2][256],chan[256];
	int i,j,len[2],result=1,wzy=0,weizhi;


	scanf("%s%s%s",word[1],word[0],chan);
	len[0]=strlen(word[0]);
	len[1]=strlen(word[1]);


	for(i=0;i<=len[1]-len[0];i++)
	{
		if(word[1][i]==word[0][0])
		{
			for(j=i+1;j<i+len[0];j++)
			{
				if(word[1][j]!=word[0][j-i])
				{
					result=0;
					break;
				}
			}
			if(result)
			{
				weizhi=i;
				wzy=1;
			}
			result=1;
		}
		if(wzy==1)
		{
			break;
		}
	}

	if(wzy==1)
	{
		for(i=weizhi;i<weizhi+len[0];i++)
		{
			word[1][i]=chan[i-weizhi];
		}
	}
	
	for(i=0;i<len[1];i++)
	{
		printf("%c",word[1][i]);
	}

	return 0;
}