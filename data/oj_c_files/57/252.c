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
	char str[100][100];
	int n,i,j,a;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s",str[i]);
	for(i=0;i<n;i++)
	{a=strlen(str[i]);
	if(str[i][a-2]=='e'&&str[i][a-1]=='r')
	{for(j=0;j<a-2;j++)
	printf("%c",str[i][j]);
	}
	else if(str[i][a-2]=='l'&&str[i][a-1]=='y')
	{for(j=0;j<a-2;j++)
	printf("%c",str[i][j]);
	}
	else 
	{for(j=0;j<a-3;j++)
	printf("%c",str[i][j]);
	}
	printf("\n");
	}
	return 0;
}