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
	int i,j;
	int t;
	char str[50][15]={""},str_o[50][15]={""};
	    scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s",str[i]);

	for(i=0;i<n;i++)
	{
		t=strlen(str[i]);
		if(str[i][t-3]=='i'&&str[i][t-2]=='n')
            for(j=0;j<t-3;j++)
				str_o[i][j]=str[i][j];
		else
			for(j=0;j<t-2;j++)
				str_o[i][j]=str[i][j];
		printf("%s\n",str_o[i]);

	}

}