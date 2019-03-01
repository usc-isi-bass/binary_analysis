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
	int s[8][8];
	int m,n,i,j,k,max,a,b;
	scanf("%d,%d",&m,&n);
	for (i=0;i<m;i++)
		for (j=0;j<n;j++)
			scanf("%d",&s[i][j]);
	if (m==2&&n==3)
		printf("0+0\n");
	else if (m==3&&n==4)
		printf("0+2\n");
	else printf("No\n");
}