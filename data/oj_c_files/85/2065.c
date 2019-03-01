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
	for(int i=0;i<n;i++)
		{
		char c[21]={0};
		scanf("%s",c);
		int len=strlen(c),judge=0;
		if(!isalpha(c[0])&&c[0]!='_')
			{
			printf("no\n");
			judge=1;
			} 	
		else
			{
			for(int j=1;j<len;j++)
				{
				if(!isalnum(c[j])&&c[j]!='_')
					{
					printf("no\n");
					judge=1;
					break;	
					}	
				}	
			}
		if(judge==0)
			printf("yes\n");	
		}
}