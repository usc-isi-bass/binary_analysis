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
	int i,j,k,l,n,m,row,col;
	int a[200][200]={0};
	scanf("%d%d",&row,&col);
	for(i=1;i<=row;i++)
		for(j=1;j<=col;j++)
			scanf("%d",&a[i][j]);
	for(i=1;i<row+col+1;i++)
		for(j=1;j<=i;j++)
			if(a[j][i-j]!=0)
			printf("%d\n",a[j][i-j]);
	return 0;
}