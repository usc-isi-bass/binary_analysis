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
	int row,col,i,j,k,*p;
	scanf("%d %d",&row,&col);
	p=(int *)malloc(sizeof(int)*row*col);
	for(i=0;i<row*col;i++)
		scanf("%d",p+i);
	printf("%d\n",*p);p++;
	for(i=1;i<col;i++,p++)
		for(j=0,k=0;k<=i&&(i+j)<(row*col);k++,j=j+col-1)
			 printf("%d\n",*(p+j));
	p+=col-1;
	for(i=1;i<=(row-1);i++,p+=col)
		for(j=0,k=0;k<(row-i)&&k<col&&*(p+j)!=0;k++,j=j+col-1)
			printf("%d\n",*(p+j));


}