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
	char string[100][20];
	int i,j;
	for(i=0;i<=n-1;i++)
		scanf("%s",&string[i]);
	int length;
	for(i=0;i<=n-1;i++)
	{
		length=strlen(string[i]);
		if(string[i][length-2]=='e' && string[i][length-1]=='r')
		{
			for(j=0;j<=length-3;j++)
				printf("%c",string[i][j]);
			printf("\n");
		}
		else if(string[i][length-2]=='l' && string[i][length-1]=='y')
		{
			for(j=0;j<=length-3;j++)
				printf("%c",string[i][j]);
			printf("\n");
		}
		else
		{
			for(j=0;j<=length-4;j++)
				printf("%c",string[i][j]);
			printf("\n");
		}
	}
	return 0;
}