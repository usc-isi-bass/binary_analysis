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
	int n,i,j;
	char a[50][20];
	scanf("%d",&n);
	for (i=0;i<n;i++)
		scanf("%s",a[i]);
	for (i=0;i<n;i++)
	
	{
		if(a[i][strlen(a[i])-3]=='i')
		{
			for(j=0;j<strlen(a[i])-3;j++)
				printf("%c",a[i][j]);
			printf("\n");
		}
		if(a[i][strlen(a[i])-2]=='e'||a[i][strlen(a[i])-2]=='l')
		{
			for(j=0;j<strlen(a[i])-2;j++)
				printf("%c",a[i][j]);
			printf("\n");
		}
	}
	return 0;
}