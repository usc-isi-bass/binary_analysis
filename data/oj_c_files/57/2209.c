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

void main()
{
	char w[50][15];
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",w[i]);
	}
	for(i=0;i<n;i++)
	{
		if(w[i][strlen(w[i])-3]=='i')
		{
			for(j=0;j<(int)strlen(w[i])-3;j++)
				printf("%c",w[i][j]);
			printf("\n");
		}
		 else
		 {
			 for(j=0;j<(int)strlen(w[i])-2;j++)
				printf("%c",w[i][j]); 
			 printf("\n");
		 }
	}

}