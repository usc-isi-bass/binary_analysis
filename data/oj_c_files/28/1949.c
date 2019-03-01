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
	int a,b,c;
	int sum=0;
	int sz[1000]={0};
	int i,j,k;
	char s1[10000];
	gets(s1);
	for(i=0;i<strlen(s1);i++)
	{
		if(i==0)
		{

			for(j=0;s1[i+j]!=' '&&s1[i+j]!='\0';j++)
			{
				sz[sum]++;
			}
			sum++;
		}
		else
		{
			if(s1[i]!=' '&&s1[i-1]==' ')
			{

				for(j=0;s1[i+j]!=' '&&s1[i+j]!='\0';j++)
				{
					sz[sum]++;
				}
				sum++;
			}
		}
	}
	
	for(i=0;i<sum;i++)
	{
		if(i!=0)
		{
			printf(",");
		}
		printf("%d",sz[i]);
	}






		return 0;
}




