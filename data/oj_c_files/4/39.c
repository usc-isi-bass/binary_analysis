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
	int i,j,row,col,m;
	scanf("%d %d",&row,&col);
	int (*p)[col];
	p=(int(*)[col])calloc(row,col*sizeof(int));
    for(i=0;i<row;i++)
      for(j=0;j<col;j++)
		  scanf("%d",*(p+i)+j);
	for(i=0;i<col;i++)
	   {m=(i<=(row-1)?i:(row-1));
		for(j=0;j<=m;j++)  printf("%d\n",*(*(p+j)+i-j));}
	for(j=0;j<row-1;j++)
	{
		m=((row-1)<=(col+j)?(row-1):(col+j));
	    for(i=1+j;i<=m;i++)  printf("%d\n",*(*(p+i)+col-i+j));}		
}