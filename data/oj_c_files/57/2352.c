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
 	 char str[50][30];
 	 int n,i,j,m,k;
 	 scanf("%d",&n);
 	 for(i=0;i<n;i++)
     {
		 scanf("%s",&str[i]);	 
		 k=strlen(str[i]);
		 if(str[i][k-1]=='g')
		 {
			 for(j=0;j<k-3;j++)
				printf("%c",str[i][j]);
		 }
		if(str[i][k-1]=='y'||str[i][k-1]=='r')
		{
			for(j=0;j<k-2;j++)
				printf("%c",str[i][j]);
		}
		printf("\n");
	 }
}
