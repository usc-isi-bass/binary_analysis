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
	int a[100][100];
	int row,col,t,i,j;
	scanf("%d%d",&row,&col);
for(i=0;i<row;i++)
{
	for(j=0;j<col;j++)
	{scanf("%d",&a[i][j]);}}
     row-=1;
	 col-=1;
	 t=row+col;
     for(i=0;i<=t;i++)
     {for(j=0;j<=i;j++)
	 {   if(j>row||(i-j)>col)
	 continue;
		 printf("%d\n",a[j][i-j]);}}
	return 0;
}
