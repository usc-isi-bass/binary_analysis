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



int main(int argc, char* argv[])
{
	char word[300];
	int num[123]={0},l,i=0,j=97,k=0;

		scanf("%s",word);
		l=strlen(word);
		for(j=97;j<123;j++)
		{
			
			for(i=0;i<l;i++)
			{
				if(word[i]==j)
				{
					num[j]++;
				}
			}
		}
		for(j=97;j<123;j++)
		{
			if(num[j]==0)
				k++;
		}
		if(k==26)printf("No");
		else
		{
		
		
		for(j=97;j<123;j++)
		{
			if(num[j]!=0)
			{
				printf("%c=%d\n",j,num[j]);
			}
		}
		}
		
	
	return 0;

}