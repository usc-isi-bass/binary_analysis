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

	int i,j,n,max,maxspot,k=0,l;
	char str[100][11],substr[100][4];
	
	while(scanf("%s%s",str[k],substr[k])!=EOF)
	k++;
	
	
	for(l=0;l<k;l++)
	{
	
	n=strlen(str[l]);
	max=str[l][0];
	maxspot=0;
	for(i=0;i<n;i++)
	{
		if(str[l][i]>max)
		{
			max=str[l][i];
			maxspot=i;
		}
	}
	for(j=0;j<maxspot+1;j++)
		printf("%c",str[l][j]);
	printf("%s",substr[l]);
	for(j=maxspot+1;j<n;j++)
		printf("%c",str[l][j]);
	printf("\n");
	
	}

	

	return 0;
}

		




