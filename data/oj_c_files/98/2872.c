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
	char **p=(char **)malloc((n+5)*sizeof(char *));
	for(int i=0;i<n;i++)
	    {
		p[i]=(char *)malloc(sizeof(char)*41);
		scanf("%s",p[i]);	
		}
	int count=0;
	for(int i=0;i<n;i++)
	    {
		if(count==0)
			{
			printf("%s",p[i]);
			count+=strlen(p[i]);	
			}	
		else
			{
			if(count+strlen(p[i])+1<=80)
				{
				printf(" %s",p[i]);
				count+=(strlen(p[i])+1);	
				}	
			else
				{
				printf("\n");
				printf("%s",p[i]);
				count=strlen(p[i]);
				}	
			}
		}
}