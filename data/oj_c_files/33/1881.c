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

int main(int argc, char* argv[])
{
	int n,i,j;
	char gen[1000][1000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",&gen[i]);
	}
	for (i=0;i<n;i++)
	{
		for (j=0;j<(int)strlen(gen[i]);j++)
		{
			if (gen[i][j]==65)
			{printf("T");}
			if (gen[i][j]==84)
			{printf("A");}
			if (gen[i][j]==67)
			{printf("G");}
			if (gen[i][j]==71)
			{printf("C");}
		}
		{printf("\n");}	
	}
	
	return 0;
}
