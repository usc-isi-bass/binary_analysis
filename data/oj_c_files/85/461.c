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
	int n,i,j,l;
	char word[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",word);
		l=strlen(word);
		if(word[0]<='z'&&word[0]>='a'||word[0]<='Z'&&word[0]>='A'||word[0]==' '||word[0]=='_')
			;
		else
			{
				printf("no\n");
				continue;
			}
		for(j=1;j<l;j++)
		{
				if(word[j]<='9'&&word[j]>='0'||word[j]<='z'&&word[j]>='a'||word[j]<='Z'&&word[j]>='A'||word[j]==' '||word[j]=='_')
					;
				else
				{
					printf("no\n");
					goto MQ;
				}
				
		}
		printf("yes\n");
MQ:;
	}
	return 0;
}
